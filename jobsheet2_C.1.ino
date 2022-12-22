#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 21 // ESP32 pin GIO21
#define RST_PIN 22 // ESP32 pin GIO22
MFRC522 rfid(SS_PIN, RST_PIN);
byte keyTagUID[4] = {0xC7, 0x25, 0x02, 0x3C};
const int ledPin1 = 12;
const int ledPin2 = 32;

void setup() {
Serial.begin(9600);
SPI.begin(); // init SPI bus
rfid.PCD_Init(); // init MFRC522
Serial.println("Tap RFID/NFC Tag on reader");
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}
void loop() {
if (rfid.PICC_IsNewCardPresent()) { // new tag is available
if (rfid.PICC_ReadCardSerial()) { // NUID has been readed
MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
if (rfid.uid.uidByte[0] == keyTagUID[0] &&
rfid.uid.uidByte[1] == keyTagUID[1] &&
rfid.uid.uidByte[2] == keyTagUID[2] &&
rfid.uid.uidByte[3] == keyTagUID[3] ) {
 digitalWrite(ledPin1, HIGH);
 delay(500);
 digitalWrite(ledPin1, LOW);
 Serial.println("Access is granted");
}
else
{
 digitalWrite(ledPin2, HIGH);
 delay(500);
 digitalWrite(ledPin2, LOW);
 Serial.print("Access denied for user with UID:");
  for (int i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
  Serial.print(rfid.uid.uidByte[i], HEX);
}
Serial.println();
}
rfid.PICC_HaltA(); // halt PICC
rfid.PCD_StopCrypto1(); // stop encryption on PCD
}
}
}
