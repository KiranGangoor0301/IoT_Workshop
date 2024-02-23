const int trigPin = 7;
const int echoPin = 8;
long duration;
int led=42;
int BUZZER=6;
int RELAY=5;

int distance;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(RELAY,OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);

  distance = duration * 0.034/2;
  if(distance>1000)
  {
  digitalWrite(led,HIGH);
    digitalWrite(BUZZER,HIGH);
  }
  Serial.println(duration);
  Serial.println(distance);
  delay(1000);
}