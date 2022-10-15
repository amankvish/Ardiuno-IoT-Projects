const int LED=13, L=12,M=11;


void setup() {
  pinMode (LED, OUTPUT);
  pinMode (L, OUTPUT);
  pinMode (M, OUTPUT);

}

void loop() {

digitalWrite (LED, HIGH);
delay(1000);
digitalWrite (L, LOW);
delay(4321);
digitalWrite (M,HIGH);;
delay(3000);

digitalWrite (LED,LOW);
delay(2000);
digitalWrite (L, HIGH);
delay(2543);
digitalWrite (M, LOW);
delay(3500);



}
