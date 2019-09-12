#include <DallasTemperature.h>
#include <OneWire.h>

#define DS18B20 16

OneWire oneWire(DS18B20);
DallasTemperature tempSensor(&oneWire);

void setup() {
  Serial.begin(115200);  // シリアルの初期化
  while(!Serial);        // シリアルが利用可能になるまで待つ
  tempSensor.begin();    // 温度計測クラスの初期化
}

void loop() {
  Serial.print("Requesting tempretures...");
  tempSensor.requestTemperatures();            // 温度計測のリクエスト
  Serial.println("done");
  float temp = tempSensor.getTempCByIndex(0);  // 温度をセ氏で取得
  Serial.print("Tempreture: ");
  Serial.print(temp);
  Serial.println(" ℃");
  delay(1000);         // 1秒待つ
}
