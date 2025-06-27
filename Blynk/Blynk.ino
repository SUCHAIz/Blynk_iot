#define BLYNK_TEMPLATE_ID "TMPL6R5bNou8E"
#define BLYNK_TEMPLATE_NAME "Test"
#define BLYNK_AUTH_TOKEN "Y5lQpXib96Ysm5AQjT-UzR_uJsTMn8UP"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "SUCHAI";
char pass[] = "Ken123taa";

int ledpin = 2;

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(ledpin, value);
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

asdasdsadasda
sa
as
dsaas