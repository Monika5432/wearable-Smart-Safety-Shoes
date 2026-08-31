# 🚨 Smart Safety Shoes

> A discreet, wearable emergency-alert system built into footwear — so asking for help never depends on being able to reach, unlock, or talk into a phone.

**HackIndia AI & Web3 Builders Hackathon 2026**
**Track:** Hardware, IoT & Embedded Systems

---

## 🎯 The Problem

In an emergency, the first fifteen seconds matter most — and they're often the moments a phone is least usable. It may be out of reach, in a bag, in a pocket that can't be accessed, or simply too risky to pull out and unlock in front of a threat. Existing personal-safety apps all share the same weak point: **they assume the user can freely operate a smartphone under stress.**

Smart Safety Shoes removes that assumption. The trigger lives on the body, in something already being worn, activated by a motion that doesn't look like a distress signal to anyone watching.

## 💡 Our Solution

Smart Safety Shoes embeds an ESP32-based system directly into the shoe: a discreet trigger, live location capture, and an automatic alert to predefined emergency contacts — no phone unlock required.

```text
Emergency Trigger
       ↓
     ESP32
       ↓
Emergency Processing
       ↓
Location + Communication
       ↓
Emergency Alert
       ↓
Predefined Contact
```

### What makes this different

- **Concealment by design** — the trigger is built into an everyday object, not a visible panic button or app icon.
- **Phone-independent activation** — the alert path doesn't require unlocking, opening an app, or speaking.
- **Engineered incrementally, not simulated** — every module is bench-tested on real hardware before being marked as working, so the status you see below is the actual state of the build, not a pitch-deck aspiration.

## 🔧 Technology Stack

**Hardware**
- ESP32 (Wi-Fi/Bluetooth microcontroller)
- Discreet emergency trigger
- GPS/GNSS location module
- Microphone / sound sensor (for future voice-based detection)
- Buzzer / vibration motor for local confirmation feedback
- Rechargeable battery and charging circuit

**Software**
- Embedded C/C++ on the ESP32 platform
- Mobile/phone communication layer for relaying the alert
- Companion mobile application *(if included in the final prototype)*

## 📂 Repository Structure

```text
Smart-Safety-Shoes/
│
├── README.md
├── LICENSE
├── .gitignore
│
├── hardware/
│   ├── components.md
│   ├── wiring.md
│   └── circuit-diagram/
│
├── firmware/
│   ├── main/
│   │   └── main.ino
│   └── modules/
│       └── README.md
│
├── mobile-app/
│   └── README.md
│
├── docs/
│   ├── problem-statement.md
│   ├── solution.md
│   ├── system-architecture.md
│   └── testing.md
│
├── images/
│   └── README.md
│
└── demo/
    └── README.md
```

## 🚧 Development Status

| Module | Status |
|---|---|
| Problem definition | ✅ Completed |
| Repository | ✅ Created |
| ESP32 setup | 🟡 In development |
| Emergency trigger | 🟡 In development |
| Location system | 🟡 Planned |
| Phone communication | 🟡 Planned |
| Voice/sound detection | 🟡 Planned |
| Shoe integration | 🟡 Planned |
| End-to-end testing | ⏳ Pending |
| Final demo | ⏳ Pending |

**Why the status is this granular:** each row only moves to ✅ once it's been validated on real hardware — no feature is marked "done" on the strength of a plan or a mockup. For a judge, that means the roadmap below is a genuine build order, not marketing copy.

## 🗺️ Roadmap

### Phase 1 — Electronics
- [ ] Set up ESP32
- [ ] Test emergency trigger
- [ ] Test feedback mechanism
- [ ] Test power supply

### Phase 2 — Communication & Location
- [ ] Implement location acquisition
- [ ] Establish phone communication
- [ ] Implement emergency alert
- [ ] Test alert delivery

### Phase 3 — Intelligent Detection
- [ ] Add microphone/sound input
- [ ] Develop voice/scream detection
- [ ] Reduce false triggers
- [ ] Test real-world conditions

### Phase 4 — Shoe Integration
- [ ] Design electronics placement
- [ ] Secure wiring
- [ ] Integrate battery
- [ ] Improve comfort and safety
- [ ] Build final prototype

### Phase 5 — Validation
- [ ] Emergency-trigger test
- [ ] Location test
- [ ] Communication test
- [ ] Battery test
- [ ] False-trigger test
- [ ] End-to-end demonstration

## 📊 Testing

Every result recorded in [`docs/testing.md`](docs/testing.md) is measured on the physical prototype — nothing is filled in until it's been run. See that file for the live test matrix.

## 🔮 Future Scope

- Improved on-device sound classification
- More reliable emergency-event detection
- Independent communication that doesn't fully depend on a paired phone
- Smaller custom PCB for a slimmer shoe footprint
- Better power management and battery life
- Waterproofing and ruggedization for daily wear
- Production-ready footwear integration

## 👥 Team

| Name | Role |
|---|---|
| Team Member 1 | Hardware / Embedded |
| Team Member 2 | Software / App |
| Team Member 3 | Design / Documentation |

## ⚠️ Disclaimer

This is a student prototype under active development. It is not a replacement for established emergency services until it has been thoroughly tested and validated.
