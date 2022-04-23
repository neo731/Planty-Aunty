byte vccPin = 6;
byte dataPin = A1;
void setup() {
 pinMode(vccPin, OUTPUT);
 digitalWrite(vccPin, LOW);
 Serial.begin(9600);
 while (!Serial);
}
int readHumidity() {
 digitalWrite(vccPin, HIGH);
 delay(500); 
 int value = analogRead(dataPin);
 digitalWrite(vccPin, LOW);
 return 1023 - value;
}
void loop() {
 Serial.print("HumidityLevel (0-1023): ");
 Serial.println(readHumidity()); 
 delay(10000);
}