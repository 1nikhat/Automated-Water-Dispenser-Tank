void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
int x;
void loop() {
  // put your main code here, to run repeatedly:
x=
if(x>600)
{
  analogWrite(x,20);
  Serial.println(x);
}
else if(x>300&&x<600)
{
  analogWrite(x,100);
  Serial.println(x);
}
else if(x<300)
{
  analogWrite(x,200);
  Serial.println(x);
}
}
