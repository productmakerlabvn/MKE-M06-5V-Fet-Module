
// Đặt tên cho chân kết nối Module
const int SIG_PIN = 10; // khai báo chân số 10 là chân điều khiển module MKE-M06

void setup()
{

  pinMode(SIG_PIN, OUTPUT); // cấu hình chân SIG la chân tín hiệu điều khiển module MKE-M06
}

void loop()
{
  int Analog_Data;              // khai báo biến chưa giá trị analog đọc được từ biến trở
  Analog_Data = analogRead(A1); // Đọc dữ liệu  từ chân A1

  int PWM_Data = map(Analog_Data, 0, 700, 0, 255);// Hàm map() nhận vào 5 tham số:
  // Analog_Data: Giá trị cần được chuyển đổi. Biến này có thể là một giá trị analog từ cảm biến hoặc một nguồn dữ liệu khác.

  // 0: Giá trị thấp nhất của khoảng đầu vào (input range).

  // 700: Giá trị cao nhất của khoảng đầu vào.

  // 0: Giá trị thấp nhất của khoảng đầu ra (output range).

  // 255: Giá trị cao nhất của khoảng đầu ra.

  analogWrite(SIG_PIN, PWM_Data); // ghi dữ liệu đọc được từ chân A1 vào chân tín hiệu điều khiển module MKE-M06
  delay(100);
}