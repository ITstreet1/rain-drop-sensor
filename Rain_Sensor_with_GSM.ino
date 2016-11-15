/*
RAIN DROP DETECTOR WITH GSM( USING SIM-900 MINI , RAINDROP SENSOR & ARDUINO UNO);

     Here We Are Using Raindrop Sensor To Detect Raindrop Intensity And Generate An Analog Varying Signal From 0 To 1024.
     It Also Generates A Digital Output According To Its Preset Value.
     When The Raindrop Sensor Detects Rain Then It's Going To Send An Analog Signal To Arduino Uno Board.Arduino Uno Monitoring The Change Happening On Raindrop Sensor.
     When The Value Of Raindrop Sensor Going Beyond A Certain Level Our Arduino Uno Sends Some At Command To Our GSM Module And GSM Module Send An SMS To The Given Phone No.


  The circuit:
   * GSM MODULE(SIM-900 MINI) 5VT(TX) CONNECTED TO PIN 9(RX FOR SOFTWARE SERIAL)
   * GSM MODULE(SIM-900 MINI) 5VR(RX) CONNECTED TO PIN 10(TX FOR SOFTWARE SERIAL)
   * RAINDROP SENSOR DO TO PIN 11
   * RAINDROP SENSOR AO TO PIN A0
   * CONNECT VCC OF RAINDROP TO 5V OF ARDUINO UNO
   * CONNECT VCC OF GSM TO 5V OF ARDUINO UNO.

 created 8 NOV 2016
 by SOUMYA RANJAN PANDA

 For any help contact info@deligence.com

 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);  //(RX,TX)
int d=0;
void setup() {
  mySerial.begin(9600);    
  Serial.begin(9600);    
  pinMode(11,INPUT);            //FOR DIGITAL INPUT
  pinMode(A0,INPUT);            //FOR ANALOG INPUT
  delay(50);
}
void loop() {
   
	int sensorReading = analogRead(A0); //READ RAINDROP SENSOR VALUE
 
  
    	if(sensorReading<500)             //WHEN SENSOR DETACT RAIN IT'S ANALOG VALUE REDUCE
    	{            
        Serial.println("Raining");
        SendMessage();                  //SENDING SMS SIGNAL TO GSM MODULE
        while(analogRead(A0)<800);      //HOLDING STATE UNTIL RAIN STOP
      }
      
            else if((sensorReading>500)&&(sensorReading<800))   // IT IS FOR RAINWARNING 
           { 
              Serial.println("Rain Warnigitng");
           }
 
              else if(sensorReading>800)          //WHEN RAIN STOP
              {
                  Serial.println("NotRaining");
                  
              }

  delay(1000); 
}


/***************************FOR GSM SIM-900 MINI********************************/


void SendMessage()                    //SENDING SMS SIGNAL
{
  mySerial.println("AT+CMGF=1");    //SELECTING SMS Text Mode
  delay(1000); 
  mySerial.println("AT+CMGS=\"+91XXXXXXXXXX\"\r");   //PROVIDE YOUR MOBILE NUMBER
  
  delay(1000);
  mySerial.println("HELLO SIR, I AM YOUR HOUSE .IT'S RAINING OUTSIDE :)");
  delay(100);
  mySerial.println((char)26);
  delay(1000);
}
