#include <Servo.h>
Servo myservo;
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  myservo.attach(4);
  

}

void loop()
{
  myservo.write(0);
  int buton=digitalRead(5);
  int mesafe = 0.01723 * readUltrasonicDistance(7, 7);
  int frekans=0;
  int ritim=0;
  if(buton==0){
  	digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    while(mesafe<=100){
    	mesafe = 0.01723 * readUltrasonicDistance(7, 7);
      	tone(6,500,100);
    }
  }
  else{
  	digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    while(buton==1){
        if(mesafe<=100){
    		myservo.write(90);
        }
        else{
            myservo.write(0);
        }  
        buton=digitalRead(5);
       	mesafe = 0.01723 * readUltrasonicDistance(7, 7);
       	frekans=1000/(map(mesafe,0,336,1,4));
       	ritim=250*(map(mesafe,0,336,1,4));
       	tone(6,frekans,ritim);
       	delay(ritim);
       	noTone(6);
       	delay(ritim);


    }
  }
  delay(100);
}
