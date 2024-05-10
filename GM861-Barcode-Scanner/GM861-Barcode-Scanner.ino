//GM861-Barcode-Scanner

#include <SoftwareSerial.h>

String text = "";
SoftwareSerial mySerial(D5, D6); // RX, TX

void setup()
{
  Serial.begin(115200);
  mySerial.begin(115200);
  Serial.println("Start");
}

void loop()
{
  if (mySerial.available() > 0)
  {
    Serial.write(mySerial.read());
  }
}
