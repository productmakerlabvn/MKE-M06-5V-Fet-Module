# Mạch đóng ngắt tải MKE-M05 optocoupler relay module

![](/image/MKE_M05_1.jpg)

## Giới thiệu

Mạch đóng ngắt tải MKE-M05 optocoupler relay module được sử dụng như một dạng công tắc 3 cực với ba tiếp điểm thường đóng (NC), thường mở (NO) và chân chung (COM) được điều khiển bằng tín hiệu từ mạch xử lý, mạch có thể đóng ngắt dòng điện, tín hiệu điện một chiều (DC) và xoay chiều (AC), mạch được thiết kế chống nhiễu và bảo vệ an toàn với Transistor, Diode và Opto cách ly.

Mạch đóng ngắt tải MKE-M05 optocoupler relay module thuộc hệ sinh thái phần cứng Robotics MakerEdu nên có thể sử dụng trực tiếp an toàn với các mạch điều khiển trung tâm ở cả hai mức điện áp 3.3VDC và 5VDC như: Arduino, Raspberry Pi, Jetson Nano, Micro:bit,....với chuẩn kết nối Connector XH2.54 thông dụng.

## Nguyên lý hoạt động

Relay hoạt động như một công tắc 3 cực có thể được sử dụng để đóng ngắt nguồn hoặc tín hiệu điện AC/DC, hoạt động đóng ngắt của Relay được điều khiển bởi chân tín hiệu của mạch xử lý, các chân tiếp điểm của Relay:

- NC: là viết tắt của chân tiếp điểm thường đóng (Normally Close), chân này sẽ luôn nối với chân chung (COM) khi chưa có tín hiệu kích của mạch xử lý hoặc khi Relay chưa hoạt động, khi có tín hiệu kích từ mạch xử lý thì chân (COM) sẽ ngắt kết nối với chân (NC) và chuyển sang nối với chân (NO).
- NO: là viết tắt của chân tiếp điểm thường mở (Normally Open), ngược lại với chân (NC) chân này sẽ không nối với chân (COM) khi chưa có tín hiệu kích của mạch xử lý hoặc khi Relay chưa hoạt động, khi có tín hiệu kích từ mạch xử lý thì chân (COM) sẽ ngắt kết nối với chân (NC) và chuyển sang nối với chân (NO).
- COM: là viết tắt của chân chung (Common), chân này có thể điều khiển bởi tín hiệu từ mạch xử lý để có thể nối hoặc ngắt với hai chân (NC) hoặc (NO), khi chưa có tín hiệu kích của mạch xử lý hoặc khi Relay chưa hoạt động thì chân (COM) luôn nối với chân (NC).
Dựa vào nguyên lý hoạt động của Relay ta có thể sử dụng cặp tiếp điểm (COM) / (NO) hoặc (COM) / (NC) đấu nối tiếp với tải hoặc tín hiệu điện AC/DC để có thể điều khiển đóng ngắt bằng mạch xử lý như hình:
![](/image/MKE_M05_2.gif)

## Thông số kỹ thuật

- Điện áp hoạt động: 5VDC
- Chuẩn giao tiếp: Digital
- Điện áp giao tiếp: TTL 3.3VDC
- Loại Relay: SRD-05VDC-SL-C
- Công suất chịu tải của Relay:
  - 10A 250VAC / 10A 125VAC
  - 10A 30VDC / 10A 28VDC
- Tích` hợp Transistor, Diode và Opto cách ly bảo vệ an toàn, chống nhiễu.
- Sử dụng trực tiếp an toàn với các mạch điều khiển trung tâm giao tiếp ở cả hai mức điện áp 3.3VDC và 5VDC như: Arduino, Raspberry Pi, Jetson Nano, Micro:bit,....
- Chuẩn kết nối: connector XH2.54 3Pins
- Thuộc hệ sinh thái phần cứng Robotics MakerEdu, tương thích tốt nhất khi sử dụng với các mạch điều khiển trung tâm của MakerEdu và MakerEdu Shield.

## Kích thước

![](/image/MKE_M05_3.jpg)

## Các chân tín hiệu

![](/image/MKE_M05_4.jpg  )

<table><thead>
  <tr>
    <th>MKE-M05</th>
    <th>Ghi chú</th>
  </tr></thead>
<tbody>
  <tr>
    <td>GND</td>
    <td>Chân cấp nguồn âm 0VDC</td>
  </tr>
  <tr>
    <td>5V</td>
    <td>Chân cấp nguồn dương 5VDC</td>
  </tr>
  <tr>
    <td>SIG</td>
    <td>Chân tín hiệu Digital In</td>
  </tr>
  <tr>
    <td>NC</td>
    <td>Cổng kết nối chân tiếp điểm thường đóng của Relay (Normally Close)</td>
  </tr>
  <tr>
    <td>COM</td>
    <td>Cổng kết nối chân tiếp điểm chung của Relay (Common)</td>
  </tr>
  <tr>
    <td>NO</td>
    <td>Cổng kết nối chân tiếp điểm thường mở của Relay (Normally Open)</td>
  </tr>
</tbody>
</table>

<table><thead>
  <tr>
    <th>SIG (Digital In)</th>
    <th>Trạng thái</th>
  </tr></thead>
<tbody>
  <tr>
    <td>TTL HIGH</td>
    <td>Không hoạt động (Off)</td>
  </tr>
  <tr>
    <td>TTL LOW</td>
    <td>Hoạt động (On)</td>
  </tr>
</tbody>
</table>

## Hướng dẫn sử dụng

### Các thiết bị sử dụng trong bài hướng dẫn

#### Arduino

- [Mạch Vietduino Uno (Arduino Uno Compatible)](https://www.makerlab.vn/vuno)
- [Mạch MakerEdu Shield for Vietduino](https://www.makerlab.vn/vietduinosd)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)
- [Mạch nút nhấn MKE-M02 push button tact switch module](https://www.makerlab.vn/mkem02)

#### mBlock

- [Mạch MakerEdu Creator (Arduino Uno Compatible)](https://www.makerlab.vn/creator)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)
- [Mạch nút nhấn MKE-M02 push button tact switch module](https://www.makerlab.vn/mkem02)

#### Micro:bit:

- [Mạch Micro:bit V2](https://hshop.vn/products/kit-hoc-lap-trinh-stem-cho-tre-em-micro-bit-v2) hoặc các phiên bản tương thích.
- [Mạch MakerEdu Shield for Micro:bit](https://www.makerlab.vn/microbitsd)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)
- [Mạch nút nhấn MKE-M02 push button tact switch module](https://www.makerlab.vn/mkem02)

### Hướng dẫn sử dụng với Arduino (Code C)

[Hướng dẫn cài đặt phần mềm, nạp chương trình, cài đặt bộ thư viện Arduino cơ bản.](https://github.com/makerlabvn/Arduino-Vietduino)

- Tải và cài đặt [phần mềm Arduino tại đây.](https://www.arduino.cc/en/software)
- Trong Tools / Library Manager, tìm và cài đặt bộ thư viện tổng hợp "MAKERLABVN" by MakerLab.vn
- Mở chương trình mẫu "MKE_M05_Relay_LCD_Serial.ino" tại File / Examples / MAKERLABVN / Module / MKE_M05_Relay_LCD_Serial hoặc [tải chương trình mẫu tại đây](/arduino)
- Chọn board là Arduino Uno (mạch Vietduino Uno tương thích với Arduino Uno), chọn đúng cổng COM Port của mạch và tiến hành nạp chương trình.
- Kết nối mạch Vietduino Uno với MakerEdu Shield, kết nối Module relay vào cổng [D10] và màn hình LCD vào cổng [I2C] trên MakerEdu Shield, cấp nguồn qua cổng USB của Vietduino Uno để thấy chương trình hoạt động.

### Hướng dẫn lập trình với mBlock (kéo thả khối)

[Hướng dẫn cài đặt phần mềm, nạp chương trình, cài đặt Extension mBlock cơ bản.](https://github.com/makerlabvn/mBlock-MakerEdu-Creator)

- Tải và cài đặt phần mềm mBlock 5 ([Windows](https://www.mediafire.com/file/ma55iajd7glwmbo/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Windows.zip/file) / [Mac Intel](https://www.mediafire.com/file/pjfngy6d7ktb55f/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_Intel.zip/file) / [Mac M1M2](https://www.mediafire.com/file/mfdkgpgnpa7uv2s/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_M1M2.zip/file))
- Thêm Device "MakerEdu Creator" by MakerEduVN
- Thêm Extension "Upload Mode Broadcast" by mBlock Official
- Thêm Extension "MakerEdu Hardware" by MakerEduVN
- Mở [chương trình mẫu tại đây](/mBlock5), kết nối MakerEdu Creator với máy tính và nạp chương trình.
- Kết nối màn hình LCD vào cổng [I2C] trên MakerEdu Creator,kết nối module nút nhấn MKE-M02 vào chân [D10] và module relay MKE-M05 vào chân [D11], cấp nguồn qua cổng USB của MakerEdu Creator để thấy chương trình hoạt động.

### Hướng dẫn lập trình với Micro:bit (kéo thả khối)

[Hướng dẫn nạp chương trình, cài đặt Extension Micro:bit cơ bản.](https://github.com/makerlabvn/MakeCode-microbit)

- Khởi động phần mềm MakeCode tại: [https://makecode.microbit.org/](https://makecode.microbit.org/)
- Chọn My Projects / Import / Import URL theo đường link của chương trình mẫu:

        https://github.com/devmakerlabvn/makecode-mke-m05-optocoupler-relay-module
        
- Kết nối Micro:bit với máy tính và nạp chương trình.
- Kết nối mạch Micro:bit với MakerEdu Shield, màn hình LCD vào cổng [I2C] trên MakerEdu Shield, kết nối mạch relay MKE-M05 vào chân [P0], **cấp nguồn qua cổng USB của MakerEdu Shield** để thấy chương trình hoạt động.

## Hỗ trợ và liên hệ

- Website: [https://www.makerlab.vn/](https://www.makerlab.vn/)
- Facebook: [https://www.facebook.com/makerlabvn](https://www.facebook.com/makerlabvn)

## Nhà phân phối

- Các bạn có thể mua sản phẩm của MakerLab tại các [Nhà Phân Phối.](https://www.makerlab.vn/distributor/)
