# 🏗️ System Architecture

```text
+-----------------------------+
| Emergency Trigger / Sensors |
+-------------+---------------+
              |
              v
        +-----------+
        |   ESP32   |
        +-----+-----+
              |
       +------+------+
       |             |
       v             v
+-------------+  +-------------+
| Location    |  | Phone /     |
| System      |  | Communication|
+------+------+  +------+------+
       |                |
       +-------+--------+
               v
       +---------------+
       | Emergency     |
       | Notification  |
       +-------+-------+
               |
               v
       Predefined Contact
```

## Layer breakdown

- **Emergency Trigger / Sensors** — the physical activation point (button/trigger today; microphone-based voice or scream detection is planned for Phase 3). This is the only layer the user has to interact with.
- **ESP32** — the central controller. Reads the trigger, coordinates the location and communication layers, and drives local feedback.
- **Location System** — acquires GPS/GNSS coordinates to attach to the alert.
- **Phone / Communication** — the channel that relays the alert and location off-device to a predefined contact.
- **Emergency Notification** — the final message delivered to the contact, carrying both the alert and the location.

This is the planned architecture. It will be updated to reflect the actual, validated hardware and communication path as each layer is built and tested.
