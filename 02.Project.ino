void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int t=25;//int is intiger(numerical value)
  digitalWrite(1,HIGH);
  delay(t);//t=100 t is a delay time
  digitalWrite(2,HIGH);
  delay(t);
  digitalWrite(3,HIGH);
  delay(t);
  digitalWrite(1,LOW);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(5,LOW);
  digitalWrite(8,HIGH);
  delay(t);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  delay(t);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(t);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(9,LOW);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(8,LOW);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(7,LOW);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(6,LOW);
  digitalWrite(3,HIGH);
  delay(t);
  digitalWrite(5,LOW);
  digitalWrite(2,HIGH);
  delay(t);
  digitalWrite(4,LOW);
  digitalWrite(1,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  // put your main code here, to run repeatedly:

}
