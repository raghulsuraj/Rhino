/*
This sketch instructs motor to go through 1000 counts of optical encoder.
Connect the TX pin coming out of the motor(orange wire) to pin 9 on Arduino.
Connect the RX pin coming out of the motor(yellow wire) to pin 10 on Arduino.
Remember to give common ground connection to the motor and the Arduino.
*/
#include <SoftwareSerial.h>
#include <Rhino.h>


Rhino motor1(9,10);	// RX( -> TX of motor), TX( -> RX of motor)

void setup()
{
  delay(2000);
  motor1.printOutput(1);	// enables Serial printing of function outputs
  motor1.init();	// initializes the motor and sets current position as origin
  motor1.gotoPos(1000);  // instructs motor to go through 1000 counts of optical encoder
}

void loop()
{
  
}

