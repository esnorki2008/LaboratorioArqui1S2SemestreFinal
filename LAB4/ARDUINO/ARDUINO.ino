#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x20,16,2);
int temperatura = 0x48;
const byte filas =4;
const byte columnas=3;


char keys[filas][columnas] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'#','0','*'}
  };

byte filaPin[filas]={10,9,8,7};
byte filaCol[columnas]={13,12,11};

Keypad key = Keypad(makeKeymap(keys),filaPin,filaCol,filas,columnas);

void setup() {
  // put your setup code here, to run once:
  Wire.begin();

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);

  lcd.print("Hola");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Wire.beginTransmission(23);
  Wire.write('@');
  Wire.endTransmission();
  delay(1000);
  

  char lectura = key.getKey();
  if(lectura){
    Serial.println(lectura);
  }
}
