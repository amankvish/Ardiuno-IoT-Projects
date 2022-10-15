
int trigPin=10;
int echoPin=9;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 }
void loop(){
  long duration,distance;
  digitalWrite(trigPin, HIGH);
  duration = pulseIn(echoPin,HIGH);
  distance= (duration/2)/29.1;
  String D1= "Ultrasonic-1 value:";
  int vall= distance;
  String cm1= "CM";
  String combine1= D1+vall+cm1;
  Serial.println(combine1);
  delay(100);
}
