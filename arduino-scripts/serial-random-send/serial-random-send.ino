// Arduino Serial Tester
// rld, cycling'74, 3.2008

//long randomvalue = 0; // random value
//long countervalue = 0; // counter value
float x = 0;
float y = 0;
float z = 0;
//int serialvalue; // value for serial input
//int started = 0; // flag for whether we've received serial yet

void setup()
{
  Serial.begin(9600); // open the arduino serial port
}

void loop()
{
  x = random(1000)/200.0;
  y = random(1000)/200.0;
  z = random(1000)/200.0;
  Serial.print("X: ");
  Serial.print(x);
  Serial.print("\tY: ");
  Serial.print(y);
  Serial.print("\tZ: ");
  Serial.print(z);
  Serial.println("");
  
  delay(1);
}
