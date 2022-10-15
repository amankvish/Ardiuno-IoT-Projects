int aq;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  aq=analogRead(A0);
  Serial.print("Air Quality=");
  Serial.print(aq,DEC);
  Serial.print("PPM");
  delay(2000);
  

}
