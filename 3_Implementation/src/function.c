/**
 * @file LDR_Sensor
 * @author Kavya(kavyagolagana123@gmail.com)
 * @brief Header file LDR Sensor
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
void setup() {
    for (int i = 2; i < 6; i++)
      pinMode(i, OUTPUT);
  
    Serial.begin(9600);
  }
  
  void loop() 
  {    
    for (int i = 2; i < 6; i++)
      digitalWrite(i, LOW);
  
    status_Indicator();  
  }
  
  void status_Indicator()
  {
    int sensor_In = analogRead(A0);
    Serial.println(sensor_In);
    
    if ( sensor_In >=400  )
    {
      digitalWrite(RED, HIGH);
      digitalWrite(Buzzer,HIGH);
    }
    else if (sensor_In >=160 )
    {
      digitalWrite(ORANGE, HIGH);
    } else
    {
      digitalWrite(GREEN, HIGH);
    }
    delay(10);
  }
