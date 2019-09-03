#define LED 22

void setup() {
  pinMode(LED, OUTPUT);     // GPIO22ピンを出力用に指定
}

void loop() {
  // 0.5秒間隔でLチカ
  digitalWrite(22, HIGH);  // HIGH(3.3V)を出力
  delay(500);
  digitalWrite(22, LOW);   // LOW(0V)を出力
  delay(500);
}
