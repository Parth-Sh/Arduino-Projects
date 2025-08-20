# Temperature-Based Fan Controller (Arduino)

This Arduino project uses a DHT11 temperature sensor to monitor room temperature and activates a servo motor(simulating a fan) when the temperature exceeds 
24 degree celsius.

##  Components Used
- Arduino Uno R3
- DHT11 Temperature Sensor
- SG90 Servo Motor
- Jumper wires & breadboard

## How It Works
- Reads temperature using the DHT11 sensor
- If temperature > 24°C, the servo fan turns on
- Otherwise, it stays off
- Output is shown in the Serial Monitor
