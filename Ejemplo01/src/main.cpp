#include <Arduino.h>
// put function declarations here:
int led=13;
int a=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 }

void loop() {
  // put yodur main code here, to run repeatedly:
//digitalWrite(led, HIGH);
  Serial.println(a++);
 // delay(3000);
//digitalWrite(led, LOW);
    
    //Serial.println("apagado");
    //delay(3000);
}

// put function definitions here: