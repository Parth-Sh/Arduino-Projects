#include <IRremote.hpp>
#include <LiquidCrystal.h>
// --- Pin Config ---
#define RECV_PIN 10
#define LED_PIN 9
// Use a PWM pin for fading
// --- IR Codes ---
const unsigned long codeFastBlink = 0x0C;  // Button 1
const unsigned long codeFade = 0x5E;       // Button 3
const unsigned long codeToggle = 0x4A;     // Button 9
const unsigned long codeSlowBlink = 0x42;  // Button 7 // --- LCD Pins (RS, E, D4, D5, D6, D7) ---
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ledState = LOW;
void setup() {
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("IR LED Control");
  delay(1000);
  lcd.clear();
}
void loop() {
  if (IrReceiver.decode()) {
    unsigned long value = IrReceiver.decodedIRData.command;
    Serial.print("Received IR: 0x");
    Serial.println(value, HEX);
    lcd.clear();
    lcd.setCursor(0, 0);  // Start at first line
    if (value == codeToggle) {
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState);
      lcd.print("Mode: Toggle");
      lcd.setCursor(0, 1);
      lcd.print(ledState ? "LED ON " : "LED OFF");
    } else if (value == codeSlowBlink) {
      lcd.print("Mode: Slow Blink");
      lcd.setCursor(0, 1);
      lcd.print("Blinking...");
      for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(500);
        digitalWrite(LED_PIN, LOW);
        delay(500);
      }
      lcd.setCursor(0, 1);
      lcd.print("Done Blinking ");
    } else if (value == codeFastBlink) {
      lcd.print("Mode: Fast Blink");
      lcd.setCursor(0, 1);
      lcd.print("Blinking...");
      for (int i = 0; i < 10; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        delay(100);
      }
      lcd.setCursor(0, 1);
      lcd.print("Done Blinking ");
    } else if (value == codeFade) {
      lcd.print("Mode: Fade");
      lcd.setCursor(0, 1);
      lcd.print("Fading... ");  // Perform fading
      for (int i = 0; i <= 255; i++) {
        analogWrite(LED_PIN, i);
        delay(5);
      }
      for (int i = 255; i >= 0; i--) {
        analogWrite(LED_PIN, i);
        delay(5);
      }
      digitalWrite(LED_PIN, LOW);  // Turn off after fade
      lcd.setCursor(0, 1);
      lcd.print("Fade Complete ");
    } else {
      lcd.print("Unknown Button");
    }
    IrReceiver.resume();  // Ready for next command } }void setup() {
    // put your setup code here, to run once:
  }
}
  

  