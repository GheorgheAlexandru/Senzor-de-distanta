const int echoPin = 9;
const int trigPin = 10;
const int buzzPin = 11;
const int ledPin = 12;

long duration;
int distance;
float beepdelay;


void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);//Clear trig pin
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;

  if (distance <= 10 && distance > 5){
    beepdelay = 250;
  }
  else if(distance <=5 && distance > 3){
    beepdelay = 150;
  }
  else if(distance <= 3){
    beepdelay = 100;
  }

   if (distance <= 10) {
    digitalWrite(buzzPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(beepdelay);
    digitalWrite(buzzPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(beepdelay);
  }
  else{
    digitalWrite(buzzPin,LOW);
    digitalWrite(ledPin,LOW);
  }
  
   Serial.print("Distanta:");
  Serial.print(distance);
  delay(60);
  
}
