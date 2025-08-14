 const int trigPin = 8; // sends pulse to measure distance
 const int echoPin = 9; // receives echo from an object
 const int buzzerPin = 12; // controls the buzzer
 long duration;
 int distance;
 void setup() {
  // put your setup code here, to run once:
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
 Serial.begin(9600);
 digitalWrite(buzzerPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); // sends 10 microsecond pulse
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); // measures the time the echo takes to come back
distance = duration * 0.034/2; // sound travels at 0.034 cm/microsec
Serial.print("Distance");
Serial.print(distance);
Serial.print("cm");
if (distance>0 && distance<=10){
  digitalWrite(buzzerPin, HIGH);
}
else{
  digitalWrite(buzzerPin, LOW);
}
delay(200);
}
