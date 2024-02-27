void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}
float x;
void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(A0);
int c=x*0.48828125;
Serial.print(c);
Serial.println(".C");
delay(2000);
}

