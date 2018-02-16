## Send-only SoftwareSerial

This library is an adapation of the SoftwareSerial library, with the receiving code omitted.

It is intended for situations where you need to do software sending (not use the hardware serial) but don't need to receive anything. This lets you avoid tying up the pin-change interrupts for the receiving code.

Example of use:

```c++
#include <SendOnlySoftwareSerial.h>

SendOnlySoftwareSerial mySerial (3);  // Tx pin

void setup ()
  {
  mySerial.begin(115200);
  }

int i;

void loop ()
{
  mySerial.print ("test: ");
  mySerial.println (i++);
  delay (100);
}
```

---

## How to install

Make a folder "SendOnlySoftwareSerial" inside the "libraries" folder inside your sketchbook folder. Place the files from this repository in it, in particular SendOnlySoftwareSerial.cpp and SendOnlySoftwareSerial.h.


