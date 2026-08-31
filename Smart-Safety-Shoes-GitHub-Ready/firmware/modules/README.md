# ESP32 Firmware Modules

Keep individual modules separate while developing, and only merge a module into `main.ino` once it has passed its own hardware test:

- `emergency_trigger`
- `gps`
- `sound_detection`
- `buzzer_vibration`
- `communication`

After each module works independently, integrate it into the main firmware.
