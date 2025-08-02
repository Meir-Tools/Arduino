void setup() {
  Serial.begin(115200);
  //while (!Serial);
  Serial.println("שולח פקודה ידנית ל־DFPlayer");

  Serial1.begin(9600);
  delay(1000);

  byte playTrack1[] = {0x7E, 0xFF, 0x06, 0x03, 0x00, 0x00, 0x01, 0xEF};
  Serial1.write(playTrack1, sizeof(playTrack1));
  Serial.println("נשלח!");

  delay(1000);

  byte playTrack2[] = {0x7E, 0xFF, 0x06, 0x06, 0x00, 0x00, 0x09, 0xEF};
  Serial1.write(playTrack2, sizeof(playTrack1));
  Serial.println("נשלח!");
}

void loop() {}
