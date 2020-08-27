//Open Source
//

#include <Servo.h>
Servo myservo;
int sensorPin = A0;
int sensorValue = 0;
int val;


void setup() {
  // put your setup code here, to run once:
  myservo.attach(2);
  Serial.begin(9600);
  myservo.write(80);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = (analogRead(sensorPin));
  if (sensorValue < 650  ) {
    // cactus 
    val = 50;
  }
  else {
    
    //no cactus
    val =  20;
    myservo.write(val);
    delay(50);
  }
  Serial.println(sensorValue); //debug
  myservo.write(val);
  //delay(15);
}
