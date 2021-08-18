#include <LiquidCrystal.h>
#include "Simbolos.h"

int encender =13;

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);

  
  pinMode(encender,OUTPUT);


  //Inicializar Pantalla
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available()>0){
    int valor = Serial1.read();

    Serial1.println(valor);

    if(valor=='0'){
      digitalWrite(encender,LOW);  
    }else{
      digitalWrite(encender,HIGH);  
    }
  }

  lcd.setCursor(0,0);
  lcd.print("hola");
  

  
  lcd.createChar(0,enie);
  lcd.setCursor(1,1);
  lcd.write((byte)0);
  
  
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("nombre");
  delay(1000);
  
}
