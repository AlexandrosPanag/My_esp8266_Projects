#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "embeddedtvm"
#define DEVICE_ID "IPCS"
#define DEVICE_CREDENTIAL "NODE"

#define SSID "Redmi 7"
#define SSID_PASSWORD "mypassword"


ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(D0, OUTPUT);
  Serial.begin(9600);
  thing.add_wifi(SSID, SSID_PASSWORD);
  thing["D0"] << digitalPin(D0);
}

void loop() {
  thing.handle();
}
