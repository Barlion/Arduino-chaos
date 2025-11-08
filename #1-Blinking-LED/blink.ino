void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);// ON
  delay(1000);//wait 1 sec
  digitalWrite(8, LOW);// OFF
  delay(1000);// wait 1 sec

}