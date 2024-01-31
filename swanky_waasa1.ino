int red=5;
int yallow=6;
int green=7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yallow, OUTPUT);
  pinMode(green, OUTPUT);


}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000);
  
   digitalWrite(6, 1);
  delay(1000);
  digitalWrite(6, 0);
  delay(1000);
digitalWrite(6, 1);
  delay(1000);
  digitalWrite(6, 0);
  delay(1000);
  digitalWrite(6, 1);
  delay(1000);
  

  digitalWrite(5, 0);
  
  digitalWrite(6, 0);
  
  
  digitalWrite(7, 0);
  delay(1000);
  digitalWrite(7, 1);
  delay(1000);

digitalWrite(5, 0);
  
  digitalWrite(6, 0);
  
  digitalWrite(7, 0);
  delay(10000);
   
  
  
}