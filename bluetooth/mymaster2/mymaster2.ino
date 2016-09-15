int k1=0, k2=0;
#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11);


void setup() {
 pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  BTserial.begin(38400);


}

void loop() {

  k1=analogRead(A0);
  k2=analogRead(A1);
  k1=map(k1,0,1024,0,255);
  k2=map(k2,0,1024,0,255);
  
  Serial.print("X= ");
  Serial.println(k1);
  BTserial.write(k1);//sends a 1 through the bluetooth serial link

  Serial.print("Y= ");
  Serial.println(k2);
  BTserial.write(k2);//sends a 1 through the bluetooth serial link

}
