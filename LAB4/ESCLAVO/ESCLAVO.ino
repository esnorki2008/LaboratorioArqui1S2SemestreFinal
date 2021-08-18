#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Wire.begin(23);
  //Wire.onRequest();// me piden dato
  Wire.onReceive(reciboDatos);// me mandan datos 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
}

void reciboDatos(){
  Serial.println(Wire.read());  
}
