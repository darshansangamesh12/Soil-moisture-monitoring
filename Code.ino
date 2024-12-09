{\rtf1\ansi\ansicpg1252\cocoartf2820
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\froman\fcharset0 TimesNewRomanPSMT;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs24 \cf2 # define AOUT_PIN 36\
#define THRESHOLD 2500\
#define LEDR 21\
#define LEDG 2\
#define LEDB 15\
void setup() \{\
Serial.begin(9600);\
pinMode(LEDR, OUTPUT);\
pinMode(LEDG, OUTPUT);\
pinMode(LEDB, OUTPUT);\
\}\
void loop() \{\
int value = analogRead(AOUT_PIN); // read the analog value from sensor\
if (value > THRESHOLD) \{\
Serial.print("Moisture Level : Low (\'93);\
digitalWrite(LEDR, HIGH);\
digitalWrite(LEDG, LOW);\
digitalWrite(LEDB, LOW);\
delay(1000);\
digitalWrite(LEDR, LOW);\
\}\
else\
if (value > 1100 && value < 2200) \{\
Serial.print("Moisture Level : Medium(");\
digitalWrite(LEDG, HIGH);\
digitalWrite(LEDR, LOW);\
digitalWrite(LEDB, LOW);\
delay(1000);\
digitalWrite(LEDG, LOW);\
\}\
else \{\
Serial.print("Moisture Level : High(");\
digitalWrite(LEDB, HIGH);\
digitalWrite(LEDR, LOW);\
digitalWrite(LEDG, LOW);\
delay(1000);\
digitalWrite(LEDB, LOW);\
\}\
Serial.print(value);\
Serial.println(")");\
delay(500);\
\}}