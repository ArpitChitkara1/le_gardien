
#define BLYNK_TEMPLATE_ID " " //Add the template ID created in you blynk 2.0 app
#define BLYNK_DEVICE_NAME "Plant Monitoring System"
#define BLYNK_AUTH_TOKEN " "  // Add the Authentication token created for the new device by the Blynk app
#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//Install the following libraries from the Arduino Library 
#include <OneWire.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h> // Download library from the Internet
#include <DHT.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS D2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// This is hard coded Network access settings
char auth[] = " BLYNK_AUTH_TOKEN ";
char ssid[] = ""; // Network name
char pass[] = ""; // Network password

// Instructions for Accessing DHT11 Sensor
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer;
void sendSensor()
{
float h = dht.readHumidity();
float t = dht.readTemperature();

// Checks Sensor data , isnan = is NOT A NUMBER with logical OR 
if (isnan(h) || isnan(t)) {
Serial.println(" Failed to read from DHT sensor!");
return;
}

Blynk.virtualWrite(V5, h); //V5 is for Humidity
Blynk.virtualWrite(V6, t); //V6 is for Temperature
}
// Assign GPIO pin values with reference to DEV Board
int light = 0 ; // D3  light
int pump = 5 ; // D1 pump

//Code for instructions that has to be executed at the start 
void setup()
{
  
Serial.begin(9600);
 Blynk.begin(auth, ssid, pass,"blynk.cloud",80); 
dht.begin();

timer.setInterval(1000L, sendSensor);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
sensors.begin();

 Serial.begin(115200);
 Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
pinMode(light,OUTPUT);   
pinMode(pump,OUTPUT);
}

int sensor=0;
int output=0;

// Moisture Sensor calculation and operation code
void sendTemps()
{
  
sensor=analogRead(A0);
output=(145-map(sensor,0,1023,0,100)); //in place 145 there is 100(it change with the change in sensor)
delay(1000);
sensors.requestTemperatures();
float temp = sensors.getTempCByIndex(0);
Serial.println(temp);
Serial.print("moisture = ");
Serial.print(output);
Serial.println("%");
Blynk.virtualWrite(V1, temp);
Blynk.virtualWrite(V2, output);
delay(1000);

}
void loop()
{
Blynk.run();
setup();
timer.run();
sendTemps();
}

// Before uploading , check the Serial Port , set the Baud rate to 115200 bps
// After uploading of the code into the Development Board , Check the Serial Monitor in the IDE to verify the Working of the DEV Board.
