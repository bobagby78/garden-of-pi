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
    Serial.println("Thermistor reading : ");
    Serial.println(thermSensorValueRaw);

    hygro1ValueRaw = analogRead(hygroPin1);
    Serial.println("Hygrometer 1 reading : ");
    Serial.println(hygro1ValueRaw);
    
    hygro1ValueRaw = analogRead(hygroPin2);
    Serial.println("Hygrometer 2 reading : ");
    Serial.println(hygro2ValueRaw);

    hygro1ValueRaw = analogRead(hygroPin3);
    Serial.println("Hygrometer 3 reading : ");
    Serial.println(hygro3ValueRaw);

    hygro1ValueRaw = analogRead(hygroPin4);
    Serial.println("Hygrometer 4 reading : ");
    Serial.println(hygro4ValueRaw);

    hygro1ValueRaw = analogRead(hygroPin5);
    Serial.println("Hygrometer 5 reading : ");
    Serial.println(hygro5ValueRaw);

    Serial.println("END OF READING");

    delay(5000);
    
}
