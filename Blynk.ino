#define BLYNK_TEMPLATE_ID "TMPL6ILcrPVFK"
#define BLYNK_TEMPLATE_NAME "sc"
#define BLYNK_AUTH_TOKEN "lbouyw8bVAMJ6Mp_-WSO8WOpP0hxfVqb"  

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

const int led = 19;

char ssid[] = "KOS KEJAWAN 24"; 
char pass[] = "boardinghouse";

BLYNK_WRITE(V0) // Isi sesuai nilai integer kamu
{
  int nilai = param.asInt();
  digitalWrite(led, nilai);
}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(led, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  if (WiFi.status() == WL_CONNECTED) digitalWrite(2, HIGH);
}

void loop() {
  Blynk.run();
}
