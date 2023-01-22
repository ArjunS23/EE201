#define LED_pin_1 5
#define LED_pin_2 6
#define delayTime 1000

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_pin_1, OUTPUT);
  pinMode(LED_pin_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_pin_1, HIGH);
  digitalWrite(LED_pin_2, LOW);
  delay(delayTime);

  digitalWrite(LED_pin_1, LOW);
  digitalWrite(LED_pin_2, HIGH);
  delay(delayTime);
}