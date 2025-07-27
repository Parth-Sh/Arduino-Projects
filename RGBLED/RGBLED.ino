#define BLUE 3
#define GREEN 5
#define RED 6

void setup(){
  // put your setup code here, to run once:
pinMode(RED,OUTPUT);
pinMode(BLUE,OUTPUT);
pinMode(GREEN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RED,HIGH);
digitalWrite(BLUE,LOW);
digitalWrite(GREEN,HIGH);
delay(500);

digitalWrite(RED,HIGH);
digitalWrite(BLUE,HIGH);
digitalWrite(GREEN,LOW);
delay(500);

digitalWrite(RED,LOW);
digitalWrite(BLUE,HIGH);
digitalWrite(GREEN,HIGH);
delay(500);
}
