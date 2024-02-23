int potentiometerPin = A0; 
int led = 42;               
int brightness = 0;  

void setup() {
Serial.begin(9600);      
  pinMode(led, OUTPUT); 
}

void loop() {
  
  int potValue = analogRead(potentiometerPin);
  
  brightness = map(potValue, 0, 1023, 0, 255);
  Serial.println(brightness);
  
  digitalWrite(led, brightness);
  
  delay(10);
}
