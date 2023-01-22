#define switchPin 2
#define outputPin 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(switchPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(switchPin);
  if (switchState) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}