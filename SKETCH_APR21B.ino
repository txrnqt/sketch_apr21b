
// 1 == backwards/up 0 == forwards/down
int direction = 0;

// if routine should start
int start = false;

//pins
const int enA = null;
const int in1 = null;
const int in2 = null;
const int button = null;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(button, INPUT);

  // inital speed
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void loop() {
  int potValue = analogRead(A0);
  int pwm = map(potValue, 0, 1023, 0, 255);
  analogWrite(enA, pwm);

  if (digitalRead(button) == true) {
    start = !start;
  }

  while(digitalRead(button) == true);
  deply(20);

  if(pressed == true & direction == 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    direction 1;
    deply(20);
  }

  if(pressed == false & direction == 1) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    direction = 0;
    deply(20);
  }
}

void routine() {
  if (digitalRead(button)) {
    backwards();
    delay(2000);
    forwards();
    delay(2000);
    backwards();
    delay(2000);
    forwards();
    delay(2000);
    backwards();
    delay(2000);
    forwards();
    delay(2000);
    analogWrite(enA, 0);
    
  }
}

void forwards() {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    direction = 0;
    deply(20);
}

void backwards() {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    direction 1;
    deply(20);
}

void direction() {
    if (digitalRead(button) == true) {
    start = !start;
  }

  while(digitalRead(button) == true);
  deply(20);

  if(pressed & direction == 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    direction 1;
    deply(20);
  } else{ 
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    direction = 0;
    deply(20);
  }
}