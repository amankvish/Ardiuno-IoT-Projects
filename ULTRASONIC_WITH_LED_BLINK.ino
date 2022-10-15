int trigpin1 = 11;
int echopin1 = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin1,OUTPUT);
 pinMode(echopin1,INPUT);
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
long duration, distance,duration1,distance1;
digitalWrite(trigpin1,HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin1,LOW);
duration1 = pulseIn(echopin1,HIGH);
distance1 = (duration1/2)/29.1;
String D2 = "Ultrasonic-2 value:";
int val2 = distance1;
String combine2 = D2+val2;
Serial.println(combine2);
delay(2000);
digitalWrite(13,LOW);
if(val2 <= 30){
  digitalWrite(13,HIGH);
}

}
