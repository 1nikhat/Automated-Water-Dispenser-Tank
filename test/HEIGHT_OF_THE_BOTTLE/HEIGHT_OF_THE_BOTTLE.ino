0#include<LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
#define vlm 5
#define l 20
#define b 10

int trig = 9;
int echo = 10;
int vol;
int per;


void setup() {
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
LCD.begin(16,2);
LCD.setCursor(0,0);
LCD.print("water tank evel");
 
 // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
long t= 0,h=0,hp=0;
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
t = pulseIn(echo,HIGH);
h= t*343/20000;
hp = h/100;

hp=2*h;
Serial.print(hp);
Serial.print("\n");
vol = (h - hp)*(l*b);
per = ((vlm-vol)/vlm)*100;
delay(1000);
LCD.setCursor(0,1);
LCD.print( "       " );
LCD.setCursor(0,1);
LCD.print(per);
delay(1000);

}
