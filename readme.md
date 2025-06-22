# embedded-mini-projects

A collection of compact Arduino-based automation projects focused on real-world utility, minimal components, and tight logic. Built to test, automate, and calibrate embedded behaviors using sensors and servos.

## 🧠 Projects Overview

### 1. `ldr-servo-switch`
Turns a servo motor based on ambient light intensity detected using an LDR. Acts as a light-triggered physical switch — useful for automating devices in response to light levels.

- **Components**: LDR, Servo, Arduino
- **Use case**: Auto-switching mechanism for blinds, flaps, or toggles based on light

---

### 2. `ldr_calibrator`
Simple calibration script to log and display raw LDR values. Helps you decide thresholds for automation.

- **Components**: LDR, Arduino
- **Use case**: Debugging, threshold setup for light-based systems

---

### 3. `servo-test`
Bare-minimum servo movement script to test angular rotation and pin configuration.

- **Components**: Servo, Arduino
- **Use case**: Diagnostic or first-time servo setup

---

### 4. `tv-fan-automation`
Prototype for automating a fan based on TV power status. Uses light detection to sense TV screen activity and turns a fan on/off accordingly.

- **Components**: LDR, Servo/Fan Relay, Arduino
- **Use case**: Comfort automation — fan turns on when TV is in use

---
