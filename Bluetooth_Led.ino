int led=10;
int state=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
digitalWrite(led,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  state=Serial.read();
}
if(state=='0')
{
  digitalWrite(led,LOW);
  Serial.println("Led OFF");
  state=0;
}
if(state=='1')
{
  digitalWrite(led,HIGH);
  Serial.println("Led ON");
  state=0;
}
}
