#define potentiometerPin A0
#define LEDPin 11 //PWM pin

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potentiometerValue = analogRead(potentiometerPin);
  int brightness = map(potentiometerValue, 0, 1023, 0, 255); // analogRead is from 0 to 1023, analogWrite is from 0 to 255
  analogWrite(LEDPin, brightness);
}