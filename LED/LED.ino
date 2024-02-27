int i=0;
const int LED=11;
const int LED1=10;
const int LED2=9;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<255;i++)
{
  analogWrite(LED,i);
  analogWrite(LED1,i);
  analogWrite(LED2,i);
  delay(5);
}
for(i=255;i>0;i--)
{
  analogWrite(LED,i);
  analogWrite(LED1,i);
  analogWrite(LED2,i);
  delay(5);
}
}
