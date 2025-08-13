#include "DHT.h"         // controls the DHT sensor
#include <Servo.h>       // controls servo motor
#define DHTPin 10
#define DHTTYPE DHT11    // tells the library we r using DHT11 not some other one
DHT dht(DHTPin, DHT11);  // creates an object dht to interact with sensor
Servo fanServo;          // creates a Servo motor to control the fan
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);   // start serial monitor at 9600 bauds
dht.begin();
fanServo.attach(9);
fanServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
float temp = dht.readTemperature();
if (isnan(temp)){    // isnan is for determining whether the data is a number or not
  Serial.println("Failed to give a reading by DHT11 sensor");
  delay(2000);
  return;
}
Serial.print("Temp:");
Serial.print(temp);
Serial.println("°C");
if (temp>24){
  Serial.println("fan ON");
  for(int angle=0;angle<=90; angle+=5){
  fanServo.write(angle);
  delay(20);
  }
  for(int angle=90;angle>=0; angle-=5){
  fanServo.write(angle);
  delay(20);
  }
}
else{
  Serial.println("fan OFF");
  fanServo.write(0);
  delay(2000);
}
delay(1000);
}
