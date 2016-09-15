#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11);

int x = 0;
int y = 0;
void setup() {
  // initialize digital pin 8 as an output.

  Serial.begin(9600);
  BTserial.begin(38400);

  

}

void loop() {

  if (BTserial.available() > 0) { // Checks whether data is comming from the serial port
    x = BTserial.read(); // Reads the data from the serial port
    y = BTserial.read(); // Reads the data from the serial port
    
  Serial.println(x);
  Serial.println(y);
  
  }
 
  }

