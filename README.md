# Parking Proximity Alert System

An Arduino-based collision detection and proximity warning system that uses an ultrasonic sensor to detect nearby objects and provide realtime visual and audio alerts.
![img alt](<img width="1377" height="931" alt="image" src="https://github.com/user-attachments/assets/d2218b4c-0f0d-4827-a375-8e152b614958" />)

## Technologies

- Arduino
- Embedded C++
- Serial Communication
- Sensor Integration

## Tinkercad Simulation

View the live circuit simulation here: https://www.tinkercad.com/things/jqEYSREVEMH-parking-proximity-alert-system

Developed and tested using Tinkercad Circuits for Arduino simulation and prototyping.

## Features

- Realtime distance measurement using an HC-SR04 ultrasonic sensor
- LCD display for live object distance monitoring
- Audio alerts using a buzzer
- LED warning indicators
- Multiple alert states based on object proximity

## Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Piezo Buzzer
- LED
- Jumper Wires
- Breadboard
- Resistors

## How It Works

The ultrasonic sensor continuously measures the distance between the system and nearby objects.

The program classifies detected objects into three states:

- Safe Range: No nearby object detected
- Warning Range: Object detected within 50–100 cm
- Critical Range: Object detected within 50 cm

Depending on the measured distance, the system:
- Displays status information on the LCD
- Activates LED indicators
- Produces different buzzer tones


## Distance Formula

The distance is calculated using the speed of sound:

distance = (duration × 0.0343) / 2

where:
- duration = echo pulse travel time in microseconds
- 0.0343 = speed of sound in cm/μs

## Future Improvements

- Add multiple ultrasonic sensors for wider coverage
- Implement smoother sensor filtering
- Replace delay-based timing with non-blocking logic
- Add Bluetooth or Wi-Fi connectivity
- Store distance data for analytics



