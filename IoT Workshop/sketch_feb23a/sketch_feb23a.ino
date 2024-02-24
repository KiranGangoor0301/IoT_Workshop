const int touchPin = 7;
const int ledPin = 42; 
const int buzzerPin = 6; 

bool isOn = false; 

void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT); 
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  int touchValue = digitalRead(touchPin); 
  
  if (touchValue == HIGH) { 
    Serial.println("Touch detected!"); 
    
    if (isOn) {
      digitalWrite(ledPin, LOW); 
      noTone(buzzerPin); 
      isOn = false;
    } else {
      digitalWrite(ledPin, HIGH); 
      tone(buzzerPin, 1000);
      isOn = true; 
    }
    
    delay(1000); 
  }
}
