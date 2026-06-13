#define BLYNK_TEMPLATE_ID "ID KAMU"
#define BLYNK_TEMPLATE_NAME "NAMA TEMPLATE KAMU"
#define BLYNK_AUTH_TOKEN "Token Kamu"  

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

const int led = 19;

char ssid[] = "USENAME KAMU"; 
char pass[] = "PASSWORD KAMU";

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
