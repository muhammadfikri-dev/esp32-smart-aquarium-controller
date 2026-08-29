void setup() {
 Serial.begin(115200);
 Serial.println("ESP32 Smart Reef Aquarium Hub Ready.");
}
void loop() {
 Serial.println("Aquarium State: Temp 25.4C | Wavemaker Active | LED 85% Daylight");
 delay(5000);
}