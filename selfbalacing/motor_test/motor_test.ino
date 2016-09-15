int left1=9,left2=10;
int right1=5,right2=6;
void setup() {
  pinMode(left1,OUTPUT);
  pinMode(left2,OUTPUT);
  pinMode(right1,OUTPUT);
  pinMode(right2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
digitalWrite(left1,HIGH);
digitalWrite(left2,LOW);
digitalWrite(right1,HIGH);
digitalWrite(right2,LOW);




  
}
