// Pin definitions
const int pirPin = 2;        // PIR sensor output pin connected to Arduino digital pin 2
const int ledPin = 13;       // LED pin
const int buzzerPin = 8;     // Buzzer pin

void setup() {
  pinMode(pirPin, INPUT);         // Set PIR pin as input
  pinMode(ledPin, OUTPUT);        // Set LED pin as output
  pinMode(buzzerPin, OUTPUT);     // Set Buzzer pin as output

  Serial.begin(9600);             // Start serial monitor for debugging
  Serial.println("System ready...");
}

void loop() {
  int motionState = digitalRead(pirPin);   // Read motion sensor (HIGH or LOW)

  if (motionState == HIGH) {
    Serial.println("⚠️ Motion detected!");
    digitalWrite(ledPin, HIGH);       // Turn on LED
    digitalWrite(buzzerPin, HIGH);    // Turn on buzzer
    delay(1000);                      // Wait for 1 second
  } else {
    digitalWrite(ledPin, LOW);        // Turn off LED
    digitalWrite(buzzerPin, LOW);     // Turn off buzzer
  }

  delay(200);  // Short delay before next reading
}
