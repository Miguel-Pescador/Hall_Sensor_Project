# Hall Sensor Project

## Description
This Arduino project uses a Hall magnetic sensor to detect the presence of a magnetic field. When the sensor detects a magnet, it lights up an LED and prints a message to the Serial Monitor. The sensor can be digital (on/off) or analog (measuring magnetic field strength).

## How It Works
A Hall effect sensor outputs a voltage when exposed to a magnetic field.  
- **Digital Hall sensor:** Outputs HIGH or LOW depending on whether a magnetic field is near.  
- **Analog Hall sensor:** Outputs a voltage proportional to the magnetic field strength.  

In this project, a digital Hall sensor is connected to the Arduino. When the magnetic field is detected, the Arduino turns on an LED and prints **"Magnet detected"**. When no magnet is near, it prints **"No magnet nearby"**.

## Materials
- Arduino Uno (or compatible board)  
- Digital Hall magnetic sensor  
- LED and resistor (220Ω recommended)  
- Jumper wires  
- Breadboard  

## Circuit Setup
- Hall sensor VCC → 5V on Arduino  
- Hall sensor GND → GND on Arduino  
- Hall sensor OUT → digital pin 3  
- LED positive → digital pin 13 through resistor  
- LED negative → GND  

## Arduino Code
The code detects the sensor state and prints messages only when the state changes. Save this as `HallSensor.ino`.

