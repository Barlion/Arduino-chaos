// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);// Red
  pinMode(8, OUTPUT);// Yellow
  pinMode(7, OUTPUT);// Green
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(5000); // Red for 5 seconds
  digitalWrite(12, LOW);
  delay(1000);// All off for 1 second
  digitalWrite(8, HIGH);
  delay(2000);// Yellow for 2 seconds
  digitalWrite(8, LOW);
  delay(1000);// All off for 1 second
  digitalWrite(7, HIGH);
  delay(5000);// Green for 5 seconds
  digitalWrite(7, LOW);
  delay(1000);// All off for 1 second
}