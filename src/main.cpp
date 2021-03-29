#include <converters/fundamental.h>
#include <Arduino.h>
#include <const.h>
#include <utils.h>
#include <sd_handler.h>

long int TIME_SPAN = 1000;
long int BAUD_RATE = 9600;

String filename = String("dummy.txt");
String file_content, delimiter = ", ";

String sensor_readings;

SDWriter writer(SD_PIN);
SDReader reader(SD_PIN);

void setup() {
	// Serial writing
	Serial.begin(BAUD_RATE);
	
	// SD card initialization
	reader.begin();
	writer.begin();
	writer.delf(filename);
	
	// Delete file
	cleanSD();
}

void loop() {
	// Sensor readings
	sensor_readings = String("Sensor_1") + delimiter + 
					  String("Sensor_2") + delimiter + 
					  String("...") + delimiter + 
					  String("Sensor_n");
	
	// Update string
	String curr_reading = String(now()) + ": " + sensor_readings + String("\n");
	writer.write<String>(curr_reading, filename);
	
	// Read SD content
	Serial.println("");
	Serial.println(reader.readfile(filename));

	delay(TIME_SPAN);
}

