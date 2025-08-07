# iot-beginner-projects
Beginner IoT projects using Arduino and sensors

### Project 1: Blink External LED

**Description:**
This is the classic "Hello World" of IoT and Arduino development. In this project, we use an Arduino board to blink an external LED on and off at a regular interval.

**Components Used:**

* Arduino Uno (or compatible)
* 1x LED
* 1x 220 ohm resistor
* Breadboard
* Jumper wires

**Wiring:**

* Connect the long leg (anode) of the LED to pin 9 of Arduino through a 220 ohm resistor.
* Connect the short leg (cathode) of the LED to GND on the Arduino.

**Code Overview:**
The code turns the LED on for 500 milliseconds and then off for 500 milliseconds using `digitalWrite()` and `delay()` functions.

**Result:**
The LED will blink on and off in a 1-second cycle.

---

### Project 2: Read Temperature with DHT22

**Description:**
This project reads temperature and humidity from the DHT22 sensor and displays the values in the Serial Monitor.

**Components Used:**

* Arduino Uno
* DHT22 sensor
* 10k ohm pull-up resistor
* Breadboard
* Jumper wires

**Wiring:**

* VCC to 5V on Arduino
* GND to GND on Arduino
* DATA to pin 2 on Arduino
* Pull-up resistor (10k ohm) between VCC and DATA line

**Code Overview:**
We use the `DHT` library to read the temperature and humidity values. The code checks if the readings are valid using `isnan()` and prints them to the Serial Monitor every 2 seconds.

**Result:**
Temperature and humidity readings are printed in real time on the Serial Monitor.

---

### Project 3: Motion-Activated Buzzer

**Description:**
This project uses a PIR motion sensor to detect motion. When motion is detected, a buzzer is activated as an alarm.

**Components Used:**

* Arduino Uno
* PIR Motion Sensor
* Active Buzzer
* Breadboard
* Jumper wires

**Wiring:**

* PIR Sensor:

  * VCC to 5V
  * GND to GND
  * OUT to pin 7
* Buzzer:

  * Positive pin to pin 8
  * Negative pin to GND

**Code Overview:**
The Arduino reads the digital signal from the PIR sensor. If motion is detected (HIGH), it activates the buzzer for 1 second using `digitalWrite()`.

**Result:**
When someone passes in front of the sensor, the buzzer sounds briefly to indicate motion was detected.
