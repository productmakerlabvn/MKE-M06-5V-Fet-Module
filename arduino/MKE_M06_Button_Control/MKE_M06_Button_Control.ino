
// Đặt tên cho chân kết nối Module
const int BUTTON_PIN = 11; // khai báo chân số 9 là chân nút nhấn
const int SIG_PIN = 10;    // khai báo chân số 10 là chân điều khiển module MKE-M06

void setup()
{

  pinMode(BUTTON_PIN, INPUT); // cấu hình chân button là chân nhân tín hiệu từ nút nhấn

  pinMode(SIG_PIN, OUTPUT); // cấu hình chân SIG la chân tín hiệu điều khiển module MKE-M06
}

void loop()
{
  int State_BUTTON = digitalRead(BUTTON_PIN); // Đọc trạng thái nút nhấn
  // Khi không nhấn thì trạng thái nút nhấn sẽ là HIGH
  // Khi nhấn nút nhấn thì trạng thái nút nhấn sẽ là LOW
  if (State_BUTTON == HIGH) // Nút nhấn chưa được nhấn
  {
    digitalWrite(SIG_PIN, LOW); // Tắt máy bơm
  }
  else if (State_BUTTON == LOW) // Nút nhấn được nhấn
  {
    digitalWrite(SIG_PIN, HIGH); // Bật máy bơm
  }
}