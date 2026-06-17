# Hướng Dẫn Fix Lỗi Lệch Cấu Trúc Protobuf (ControlStatusData)

## 1. Triệu chứng của lỗi (Bên phía Flutter App)
Khi bạn chạy Flutter App và nhận dữ liệu từ mạch Control gửi lên (Topic: `devices/.../telemetry`), app log ra các giá trị rác như sau:
- `gatewayId = 1073528288` (tương đương `0x3FFCCDE0` trong hệ Hex).
- `AmpeChannel2 = 1073528196` (tương đương `0x3FFCCD84`).
- `phaseLoss = 41` (nhị phân là `0b00101001`).
- `relayStatus = 1073409872` (tương đương `0x3FEEBDD0`).

Trong hệ điều hành thời gian thực ESP32, các dải địa chỉ dạng `0x3FF...` và `0x3FE...` là các **địa chỉ ô nhớ RAM vật lý (con trỏ)** chứ không phải giá trị của cảm biến hay ID thật.

---

## 2. Nguyên nhân gốc rễ (Lệch cấu trúc struct khi biên dịch)
Trong thư mục component `components/ais_message/` chứa các định nghĩa Protobuf gửi nhận, có 2 thư mục trùng lặp chứa các file sinh ra từ Nanopb:
1. **Thư mục cũ:** `components/ais_message/protobuf/` chứa file `aquacontrol.pb.h` chỉ có **5 trường** (chưa có trường `Temperature`, `Voltage`, `relayStatus`).
2. **Thư mục mới:** `components/ais_message/include/protobuf/` chứa file `aquacontrol.pb.h` đầy đủ **8 trường**.

### Cơ chế lỗi xảy ra:
1. Khi biên dịch code C++ của firmware (như các file `powermanagertask.cpp`, `controlstatusdatamessage.cpp`), do đường dẫn include chỉ định ưu tiên thư mục `components/ais_message/`, trình biên dịch đã nạp file **`aquacontrol.pb.h` cũ (5 trường)**. Do đó, kích thước của struct `AquaCtrl_ControlStatusData` trên RAM chỉ đủ chứa 5 số `uint32_t`.
2. Tuy nhiên, file thư viện mã hóa của Nanopb (`aquacontrol.pb.c`) khi biên dịch lại nhận diện file **`aquacontrol.pb.h` mới (8 trường)**.
3. Khi hàm mã hóa của Nanopb (`pb_encode`) chạy, nó sẽ đọc struct từ địa chỉ được truyền vào và **đọc liên tiếp 8 trường dữ liệu**. 
4. Vì struct thực tế truyền vào chỉ được cấp phát bộ nhớ cho 5 trường, `pb_encode` đã đọc lấn sang vùng nhớ xung quanh trên Stack (bị tràn đọc - Stack overflow read). Nó lấy nhầm các địa chỉ biến, con trỏ đang nằm cạnh struct đó để đóng gói làm giá trị của `gatewayId`, `AmpeChannel2`, `relayStatus` gửi lên Broker.

---

## 3. Cách khắc phục đã thực hiện
Mình đã tiến hành cập nhật (ghi đè) đồng bộ các file sinh ra từ Nanopb trong thư mục cũ để khớp hoàn toàn với cấu trúc 8 trường mới:
- Cập nhật [aquacontrol.pb.h](file:///d:/IOT/ais_controlhubfirmware_v1.2/components/ais_message/protobuf/aquacontrol.pb.h) thành bản 8 trường.
- Cập nhật [aquacontrol.pb.c](file:///d:/IOT/ais_controlhubfirmware_v1.2/components/ais_message/protobuf/aquacontrol.pb.c) để đồng bộ quá trình biên dịch.

## 4. Việc bạn cần làm tiếp theo
Bây giờ, bạn chỉ cần thực hiện:
1. **Rebuild (Biên dịch lại toàn bộ)** và **Upload (Nạp lại firmware)** vào mạch Control.
2. Kiểm tra log của Flutter app xem các trường dữ liệu hiển thị đã chuẩn xác (không còn các số dạng `1073528...` và bitmask mất pha `phaseLoss` đã chuẩn) chưa nhé!
