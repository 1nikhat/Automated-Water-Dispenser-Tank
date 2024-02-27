
#define trigger 10
#define echo 11

 
float time=0,distance=0;
int temp=0; 
void setup()
{
 lcd.begin(16,2);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 
}
 
void loop()
{
 
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 distance=time*340/20000;
 
 delay(2000);
 if(distance<12 && temp==0)
 {
    
 
  
 
 
 else if(distance>30)
 {
   digitalWrite(motor, HIGH);
   lcd.clear();
   lcd.print("LOW Water Level");
   lcd.setCursor(0,1);
   lcd.print("Motor Turned ON");
   delay(5000);
   temp=0;
 }
}
