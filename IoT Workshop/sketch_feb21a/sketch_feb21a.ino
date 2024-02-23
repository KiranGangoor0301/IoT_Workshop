int led= 42;
void setup() {
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);
Serial.println("ON");
delay(2000);
digitalWrite(led, LOW);
Serial.println("OFF");
delay(2000);
}
