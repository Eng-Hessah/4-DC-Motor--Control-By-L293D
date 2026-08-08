const int enA = 6;  
const int in1 = 7;  
const int in2 = 8;  

const int in3 = 9;  
const int in4 = 10; 
const int enB = 5;  

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  analogWrite(enA, 255);
  analogWrite(enB, 255);
}

void loop() {
  moveForward();
  delay(30000);
  
  moveBackward();
  delay(60000);
  
  unsigned long startTime = millis();
  while (millis() - startTime < 60000) {
    turnRight();
    delay(2000); 
    turnLeft();
    delay(2000); 
  }
}

void moveForward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void moveBackward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}