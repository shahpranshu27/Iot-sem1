#define trigPin 12
#define echoPin 13

void setup() 
{
  
  Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
  
}

void loop() 
{
long duration, distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration/2)/29.1;//Sound can travel a dist of 0.0345 cm in 1 microsec
Serial.print("Distance:");
Serial.print(distance);
Serial.println("cm");
delay(1000);


}
