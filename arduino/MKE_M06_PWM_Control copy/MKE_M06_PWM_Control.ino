
// Đặt tên cho chân kết nối Module
const int SIG_PIN 10; // khai báo chân số 10 là chân điều khiển module MKE-M06

void setup()
{

  pinMode(SIG_PIN, OUTPUT); // cấu hình chân SIG la chân tín hiệu điều khiển module MKE-M06
}

void loop()
{
  int Analog_Data = analogRead(A1);           // Đọc dữ liệu  từ chân A1
 int PWM_Data = map(Analog_Data, 0, 1023, 0, 255);
  analogWrite(SIG_PIN, Analog_Data);          // ghi dữ liệu đọc được từ chân A1 vào chân tín hiệu điều khiển module MKE-M06
  int State_BUTTON = digitalRead(BUTTON_PIN); // Đọc trạng thái nút nhấn
  delay(100);
}