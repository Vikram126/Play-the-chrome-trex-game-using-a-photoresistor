#include <Servo.h>
Servo myservo;

  
  

void setup ()
{
  myservo.attach(10);

Serial.begin(9600);
}
void loop()
{
int sensorvalue=analogRead(A0);
if(sensorvalue>630){
myservo.write(20 );}
else if(sensorvalue<600){
myservo.write(45 );
delay(200  );

}


Serial.println(sensorvalue);
delay(1);                               
}
