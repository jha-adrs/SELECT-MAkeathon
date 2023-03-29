// To be burned into the ESP32 Wifi Module
#define RXp2 16
#define TXp2 17
void setup() {
  // Start Serial Comm at baud rate 115200
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXp2, TXp2);
}
void loop() {
    Serial.println("Message Received from Arduino: ");
    String ldr = Serail2.readString();
    Serial.println(ldr);
}
