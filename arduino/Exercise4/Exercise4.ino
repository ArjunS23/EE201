#define sevenSegmentA 2
#define sevenSegmentB 3
#define sevenSegmentC 4
#define sevenSegmentD 5
#define sevenSegmentE 6
#define sevenSegmentF 7
#define sevenSegmentG 8
#define sevenSegmentDP 9

void setup() {
  // put your setup code here, to run once:
  pinMode(sevenSegmentA, OUTPUT);
  pinMode(sevenSegmentB, OUTPUT);
  pinMode(sevenSegmentC, OUTPUT);
  pinMode(sevenSegmentD, OUTPUT);
  pinMode(sevenSegmentE, OUTPUT);
  pinMode(sevenSegmentF, OUTPUT);
  pinMode(sevenSegmentG, OUTPUT);
  pinMode(sevenSegmentDP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Write 9
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, LOW);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, HIGH);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 8
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, HIGH);
  digitalWrite(sevenSegmentE, HIGH);
  digitalWrite(sevenSegmentF, HIGH);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 7
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, LOW);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, LOW);
  digitalWrite(sevenSegmentG, LOW);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 6
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, LOW);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, HIGH);
  digitalWrite(sevenSegmentE, HIGH);
  digitalWrite(sevenSegmentF, HIGH);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 5
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, LOW);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, HIGH);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, HIGH);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 4
  digitalWrite(sevenSegmentA, LOW);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, LOW);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, HIGH);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 3
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, HIGH);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, LOW);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 2
  digitalWrite(sevenSegmentA, HIGH);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, LOW);
  digitalWrite(sevenSegmentD, HIGH);
  digitalWrite(sevenSegmentE, HIGH);
  digitalWrite(sevenSegmentF, LOW);
  digitalWrite(sevenSegmentG, HIGH);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 1
  digitalWrite(sevenSegmentA, LOW);
  digitalWrite(sevenSegmentB, HIGH);
  digitalWrite(sevenSegmentC, HIGH);
  digitalWrite(sevenSegmentD, LOW);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, LOW);
  digitalWrite(sevenSegmentG, LOW);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);

  // Write 0
  digitalWrite(sevenSegmentA, LOW);
  digitalWrite(sevenSegmentB, LOW);
  digitalWrite(sevenSegmentC, LOW);
  digitalWrite(sevenSegmentD, LOW);
  digitalWrite(sevenSegmentE, LOW);
  digitalWrite(sevenSegmentF, LOW);
  digitalWrite(sevenSegmentG, LOW);
  digitalWrite(sevenSegmentDP, LOW);
  
  delay(1500);
}
