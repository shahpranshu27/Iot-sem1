int val;
int temp=A1;
int LED=13;

void setup() 
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);

}

void loop() 
{
  val=analogRead(temp);
  float mv=(val/1024.0)*5000;
  float cel=mv/10;
  float farh=(cel*9)/5+32;

  Serial.print("Temperature=");
  Serial.print(cel);
  Serial.println("c");
  if(cel>35)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
  delay(1000);
}
