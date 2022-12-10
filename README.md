# arduino-logging-example
Arduino logging in SD card minimal example

## Requirements

This tutorial minimally requires:

### Hardware

- Arduino Uno board;
- Arduino SD shield;
- Arduino upload cable.

### Software
	
- VSCode environment;
- Platformio plugin;
- Package `platformio` (```sudo apt-get install platformio```);

## How to run
	
1. Check board-to-device connection by turned-on leds;
2. Open the current project in PlatformIO;
3. Upload it to the board;
4. Open serial monitoring, it may appear something like below:

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
