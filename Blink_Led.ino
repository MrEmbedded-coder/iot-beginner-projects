

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // LED on
  delay(1000);            // Wait 1 sec
  digitalWrite(13, LOW);  // LED off
  delay(1000);            // Wait 1 sec
}
