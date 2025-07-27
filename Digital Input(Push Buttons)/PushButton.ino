#define LEDPIN 7
#define buttonApin 6
#define buttonBpin 3
void setup() {
// put your setup code here, to run once:
  pinMode(LEDPIN,OUTPUT);
  pinMode(buttonApin,INPUT_PULLUP);
	pinMode(buttonBpin,INPUT_PULLUP);
 }
 	
 	void loop() {
 	  // put your main code here, to run repeatedly:
  if (digitalRead(buttonApin)==LOW)
 { 
 	    digitalWrite(LEDPIN,HIGH);
 	 }
 	 if (digitalRead(buttonBpin)==LOW)
 	 {
 	    digitalWrite(LEDPIN,LOW);
 	 }
 	}
 	
