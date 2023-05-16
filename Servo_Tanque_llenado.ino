//https://www.tinkercad.com/things/jF8BkTXtbvX-copy-of-practica-18-sensor-de-humedad-del-suelo/editel?tenant=circuits

 


#include <Servo.h> //Servomotor
#define pinServo 9 //Servomotor

 

Servo servo1; //Servomotor
//int grau = 0; //Servomotor

 

void setup() {


    servo1.attach(pinServo);
    Serial.begin(9600);
    Serial.println("Valor del sensor de humedad");
}

void loop() {
    int humidity = analogRead(A0);

    Serial.print("Lectura:");
    Serial.println(humidity);

    if(humidity >= 0 & humidity <= 300){
        Serial.println("Sensor en suelo seco");
       servo1.write(1);// mov 1 motor
    } else if(humidity > 301 & humidity <= 700){
        Serial.println("Sensor en suelo humedo");
    }else if(humidity >= 701){
        Serial.println("Sensor en agua");
        servo1.write(90);// mov 2 motor
        delay(1000); 
    }
    delay(1000);
}