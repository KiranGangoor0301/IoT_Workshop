int BUZZER=6;
int RELAY=5;
int ir_sensor=8;
int ldr=7;
void setup() {
  // pinMode(ir_sensor, INPUT);
  pinMode(ldr,INPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(RELAY,OUTPUT);

}

void loop() {
  
  int data=digitalRead(ldr);
  if(data==1)
  {
    digitalWrite(BUZZER,HIGH);
  }
  else
  {
    digitalWrite(BUZZER,LOW);
  }
  
  Serial.println(data);

}
