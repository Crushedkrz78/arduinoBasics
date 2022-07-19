// C++ code
//
/*
  For an array of 4 Traffic Lights
*/

void setup()
{
  // Street Light 1
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  // Street Light 2
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  // Street Light 3
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  // Traffic Light 4
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  // First Traffic Light
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  greenLight(11);
  yellowLight(12);
  digitalWrite(10, LOW);
  
  digitalWrite(13, HIGH);
  greenLight(8);
  yellowLight(9);
  digitalWrite(7, LOW);
  
  digitalWrite(10, HIGH);
  greenLight(5);
  yellowLight(6);
  digitalWrite(4, LOW);
  
  digitalWrite(7, HIGH);
  greenLight(2);
  yellowLight(3);
  digitalWrite(13, LOW);
}

void yellowLight(int yellow)
{
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
}

void greenLight(int green)
{
  digitalWrite(green, HIGH);
  delay(4000);
  digitalWrite(green, LOW);
  delay(500);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
}