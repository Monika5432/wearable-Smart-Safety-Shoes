# 🔌 Wiring

Final pin connections will be documented here once the actual components are selected and bench-tested.

## Planned connections

- Emergency trigger → ESP32 GPIO
- Microphone/sound input → ESP32 input
- GPS/GNSS → ESP32 serial interface (if used)
- Buzzer/vibration → ESP32 output, through an appropriate driver where required
- Battery/charger → regulated power supply

## Safety

Do not connect a battery directly to an ESP32 GPIO. Verify voltage, current, polarity, and charging requirements before powering the prototype.
