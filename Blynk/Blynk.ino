#define BLYNK_TEMPLATE_ID "TMPL6R5bNou8E"
#define BLYNK_TEMPLATE_NAME "Kiattphum"
#define BLYNK_AUTH_TOKEN "32ddW1WMPh3qQ9M4jZeRY0iZEQ6Xovje"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "SUCHAI";
char pass[] = "Ken123taa";

int ledpin = 2;

BLYNK_WRITE(V0) // รอรับค่าจาก V0
{
  int vPin = param.asInt();
  int pinValue = param.asInt();
  if (pinValue == 1)
  {
   Blynk.virtualWrite(vPin, 1);
    digitalWrite(ledpin, 1);
  }
  else if (pinValue == 0)
  {
    Blynk.virtualWrite(vPin, 0);
    digitalWrite(ledpin, 0);
  }
  Serial.print("V0 button value is : ");
  Serial.println(pinValue);
  
}



void setup() 
{
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() 
{
  Blynk.run();
}

