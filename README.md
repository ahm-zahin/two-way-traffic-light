```cpp
# Two-Way Traffic Light 🚦

An Arduino-based two-way traffic light controller using digital output pins.

## 🔧 Components Used
- Arduino Uno
- 6 LEDs (Red, Yellow, Green for each street)
- Resistors (2kΩ)
- Breadboard
- Jumper Wires

## 🧠 Logic Overview

The traffic lights alternate between two streets (`street_1` and `street_2`) with proper delays and transitions:

1. **Transition Phase**
   - `Street 1`: Yellow
   - `Street 2`: Red + Yellow  
   _(3 seconds)_

2. **Street 2 Green Phase**
   - `Street 1`: Red
   - `Street 2`: Green  
   _(8 seconds)_

3. **Transition Phase**
   - `Street 1`: Red + Yellow
   - `Street 2`: Yellow  
   _(3 seconds)_

4. **Street 1 Green Phase**
   - `Street 1`: Green
   - `Street 2`: Red  
   _(8 seconds)_

The cycle repeats continuously in the `loop()` function.


---

Feel free to test and tweak delays to better match real traffic timing!
