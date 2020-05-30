#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.print("Setting soft-AP ... ");
  boolean result = WiFi.softAP("COVID19", "12345678");
  if(result == true)
  {
    Serial.println("Ready");
  }
  else
  {
    Serial.println("Failed!");
  }
}

void loop(){}