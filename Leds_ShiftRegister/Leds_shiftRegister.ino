int clockPin = 9;
int latchPin = 10;
int dataPin = 12;
byte LEDS = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(clockPin,OUTPUT);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
LEDS = 0;
updateShiftRegister();
delay(500);
for(int i=0;i<8;i++){
  bitSet(LEDS,i);
  updateShiftRegister();
  delay(500);
}
}
void updateShiftRegister(){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDS);
  digitalWrite(latchPin,HIGH);
}