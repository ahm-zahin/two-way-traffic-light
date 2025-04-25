//Selecting pin for green light for street_1
const int st1Grn = 1;

//Selecting pin for yellow light for street_1
const int st1Yel = 2;

//Selecting pin for red light for street_1
const int st1Red = 3;

//Selecting pin for green light for street_2
const int st2Grn = 8;

//Selecting pin for yellow light for street_2
const int st2Yel = 9;

//Selecting pin for red light for street_2
const int st2Red = 10;


void setup() {
  pinMode(st1Grn, OUTPUT);
  pinMode(st1Yel, OUTPUT);
  pinMode(st1Red, OUTPUT);
  pinMode(st2Grn, OUTPUT);
  pinMode(st2Yel, OUTPUT);
  pinMode(st2Red, OUTPUT);
}

void loop() {
  // Yellow will be on in street_1, Red + Yellow in street_2 (transition)
  digitalWrite(st1Grn, LOW);
  digitalWrite(st1Yel, HIGH);
  digitalWrite(st1Red, LOW);
  digitalWrite(st2Grn, LOW);
  digitalWrite(st2Yel, HIGH);
  digitalWrite(st2Red, HIGH);
  delay(3000);

  // Street_1: Red, Street_2: Green (cars can go)
  digitalWrite(st1Grn, LOW);
  digitalWrite(st1Yel, LOW);
  digitalWrite(st1Red, 1);
  digitalWrite(st2Grn, HIGH);
  digitalWrite(st2Yel, LOW);
  digitalWrite(st2Red, LOW);
  delay(8000);

  // Yellow on street_2, Red + Yellow on street_1
  digitalWrite(st1Grn, LOW);
  digitalWrite(st1Yel, HIGH);
  digitalWrite(st1Red, HIGH);
  digitalWrite(st2Grn, LOW);
  digitalWrite(st2Yel, HIGH);
  digitalWrite(st2Red, LOW);
  delay(3000);

  // Street_1: Green, Street_2: Red
  digitalWrite(st1Grn, HIGH);
  digitalWrite(st1Yel, LOW);
  digitalWrite(st1Red, LOW);
  digitalWrite(st2Grn, LOW);
  digitalWrite(st2Yel, LOW);
  digitalWrite(st2Red, HIGH);
  delay(8000);
}
