#include <BH1750.h>
#include <WIRE.h>

BH1750 lightMeter;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();
  Serial.println("BH1750 Samirs Test");
}

void loop() {
  float lux = lightMeter.readLightLevel();
  Serial.print("Light LVL: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);

}
