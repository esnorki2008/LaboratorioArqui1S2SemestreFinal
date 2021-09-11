int pinUltra = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
}

long readUltrasonic(int triggerPin,int echoPin){
  pinMode(triggerPin,OUTPUT);
  digitalWrite(triggerPin,LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);
  pinMode(echoPin,INPUT);

  return pulseIn(echoPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available()>0){
    char lectura = Serial1.read();
      Serial.print(lectura);
      Serial1.print("hola");
  }
  int cm;
  cm = 0.01723*readUltrasonic(pinUltra,pinUltra);
  Serial.println(cm);
  delay(400);
}
