# ArduinoLoggingExample
Arduino logging in SD card minimal example

# Requirements

This tutorial minimally requires:

## Hardware

- 1 arduino Uno;
- 1 arduino SD shield;
- 1 Arduino upload cable

## Software
	
- VSCode;
- Platformio;
- Package platformio (```sudo apt-get install platformio```);

# How to run
	
- Check connection of the board to the computer for upload and verify if the leds turn on;
- Open default project "Blink" and upload it by clicking on right arrow in the bottom left;  
- Open the current project in PlatformIO;
- Upload it to the board;
- Open serial monitoring, it may appear something like below:

```
------
dummy.txt:
000:00:00:111: Sensor_1, Sensor_2, ..., Sensor_n
000:00:01:169: Sensor_1, Sensor_2, ..., Sensor_n
000:00:02:265: Sensor_1, Sensor_2, ..., Sensor_n
000:00:03:415: Sensor_1, Sensor_2, ..., Sensor_n
000:00:04:619: Sensor_1, Sensor_2, ..., Sensor_n
000:00:05:876: Sensor_1, Sensor_2, ..., Sensor_n
000:00:07:188: Sensor_1, Sensor_2, ..., Sensor_n
000:00:08:554: Sensor_1, Sensor_2, ..., Sensor_n
```
