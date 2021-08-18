int pinAnalogo;
int pinDigital;
int lista[7] = {23,25,27,29,31,33,35};
boolean cuatro[7] = {false,true,true,false,false,true,true};
boolean cinco[7] = {true,false,true,true,false,true,true};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinAnalogo=A0;
  pinDigital=6;
  pinMode(pinDigital,INPUT);
  //Inicializar Pines Del Display
  for(int i=0;i<8;i++){
    pinMode(lista[i],OUTPUT);
    digitalWrite(lista[i],LOW);
  }
}

void encenderPin(int pos,boolean valor){
    if(valor){
      digitalWrite(lista[pos],HIGH);
    }else{
      digitalWrite(lista[pos],LOW);
    }
}

void procesarPines(boolean arreglo[]){
  for(int i=0;i<8;i++){
    encenderPin(i,arreglo[i]);
  }
}



void encender4(){
  for(int i=0;i<8;i++){
    digitalWrite(lista[i],LOW);
  }
  digitalWrite(lista[1],HIGH);
  digitalWrite(lista[2],HIGH);
  digitalWrite(lista[5],HIGH);
  digitalWrite(lista[6],HIGH);
}

void encender3(){
  for(int i=0;i<8;i++){
    digitalWrite(lista[i],LOW);
  }
  digitalWrite(lista[0],HIGH);//pin 23
  digitalWrite(lista[1],HIGH);//pin 25
  digitalWrite(lista[2],HIGH);//pin 27
  digitalWrite(lista[3],HIGH);//pin 29
  digitalWrite(lista[6],HIGH);//pin 35
}

void loop() {
  int lectura = analogRead(pinAnalogo);
  int lecturaDigital = digitalRead(pinDigital);
  Serial.println(lecturaDigital);
  // put your main code here, to run repeatedly:
  /*
  encender4();
  delay(1000);
  encender3();
  delay(1000);
  */
  /*
  procesarPines(cuatro);
  delay(1000);
  procesarPines(cinco);
  delay(1000);
  */
  
}
