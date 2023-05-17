#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
bool stop = false;
int row, collumn;


void setup() {
  lcd.begin(16,2);
  lcd.backlight();
  row = 0;
  collumn = 0;

}
void loop() {
  while(stop == false){
    collumn = collumn+6;
    lcd.setCursor(collumn, row);
    lcd.print("         ");
    lcd.print("testus");
    delay(500);
  }



}
