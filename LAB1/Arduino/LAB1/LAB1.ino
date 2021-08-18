int led = 9;
//es la primera que se ejecuta
//solamente se ejecuta una vez
//sirve para inicializar valores,pines o variables
void setup(){
  //INICIALICE SERIAL(0)
  Serial.begin(9600);
  //PIN PARA ENCENDER EL LED
  pinMode(led,OUTPUT);

}

void loop(){
  //ENCENDER PIN
  digitalWrite(led,HIGH);
  delay(1000);
  //APAGAR PIN
  digitalWrite(led,LOW);
  delay(1000);
}
