const int ir = 8;
const int led = 13;
const int val = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int acval = digitalRead(ir);
if (acval == val) {
  Serial.println("Object Detected!!!");
  digitalWrite(13,HIGH);
} else {
  Serial.println("No Object Detected!!!");
  digitalWrite(13,LOW);
}
}
