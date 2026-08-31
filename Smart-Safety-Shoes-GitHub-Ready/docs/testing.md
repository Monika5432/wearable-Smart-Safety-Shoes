# 🧪 Testing

## Approach

Every row below is validated on the physical prototype, not simulated. A test only moves out of "Pending" once it has actually been run on real hardware — this table is a live log, not a projection.

| Test | Method | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| ESP32 startup | Power board | Board starts normally | — | Pending |
| Emergency trigger | Activate trigger | Event detected | — | Pending |
| Location | Request location | Location obtained | — | Pending |
| Alert | Trigger emergency sequence | Contact receives alert | — | Pending |
| Communication | Repeat connection test | Reliable communication | — | Pending |
| Battery | Run prototype | Safe operation | — | Pending |
| False trigger | Normal movement/activity | No unintended alert | — | Pending |

Replace `—` with measured results after testing.

## Why this matters for judging

False positives and false negatives are the two failure modes that make or break a wearable safety device — a device nobody trusts is a device nobody wears. The false-trigger test above exists specifically to catch the failure mode most panic-button prototypes skip: does normal, everyday movement accidentally fire the alarm?
