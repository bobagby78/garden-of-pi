#include <ArduinoJson.h>

int thermSensorPin = 0; //thermistor
int thermSensorValue;
int hygroPin1 = 1;
int hygroPin2 = 2;
int hygroPin3 = 3;
int hygroPin4 = 4;
int hygroPin5 = 5;

float thermSensorValueRaw;
float hygro1ValueRaw;
float hygro2ValueRaw;
float hygro3ValueRaw;
float hygro4ValueRaw;
float hygro5ValueRaw;


int ledRed = 2;
int ledGreen = 3;
int ledBlue = 4;

void setup(){
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    
}


void loop(){
    thermSensorValueRaw=analogRead(thermSensorPin);
    hygro1ValueRaw = analogRead(hygroPin1);
    hygro1ValueRaw = analogRead(hygroPin2);
    hygro1ValueRaw = analogRead(hygroPin3);
    hygro1ValueRaw = analogRead(hygroPin4);
    hygro1ValueRaw = analogRead(hygroPin5);
    
    StaticJsonDocument<500> jDoc;
//    JsonObject& doc = jDoc.createObject();
    
    jDoc["therm"] = thermSensorValueRaw;    
    jDoc["hygro1"] = hygro1ValueRaw;
    jDoc["hygro2"] = hygro2ValueRaw;
    jDoc["hygro3"] = hygro3ValueRaw;
    jDoc["hygro4"] = hygro4ValueRaw;
    jDoc["hygro5"] = hygro5ValueRaw;
    jDoc["STATUS"] = 1;

    serializeJson(jDoc, Serial);
    Serial.println();
    delay(5000);
    
}
