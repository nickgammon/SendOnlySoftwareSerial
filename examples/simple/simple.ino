#include <SendOnlySoftwareSerial.h>

SendOnlySoftwareSerial mySerial(3);  // Tx pin

void setup()
{
  mySerial.begin(115200);
}

int i;

void loop()
{
  mySerial.print ("test: ");
  mySerial.println (i++);
  delay (100);
}