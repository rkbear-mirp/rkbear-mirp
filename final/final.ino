#include "TouchScreen.h"
#include <Servo.h>
#include<PID_v1.h>

//for servo
int yServoPin=2;
int xServoPin=3;
Servo ServoX,ServoY;
//for touchscreen
int Y1=A0;
int X1=A1;
int Y2=A2;
int X2=A3;
int X;int Y;
TouchScreen ts=TouchScreen(X1,Y1,X2,Y2,711);
//for PID control
double setpointx=514;
 double setpointy=484;
double inputx,outputx;
double  inputy,outputy;
double kp=0.06;
double ki=0.08;
double kd=0.07;
PID PIDx(&inputx,&outputx,&setpointx,kp,ki,kd,REVERSE);
PID PIDy(&inputy,&outputy,&setpointy,kp,ki,kd,REVERSE); 
int mn=60,mx=120;
void setup() {
 // Serial.begin(9600);
 //for servo
ServoX.attach(xServoPin);
ServoY.attach(yServoPin);
ServoX.write(90);
ServoY.write(90);
//for PID
PIDx.SetMode(AUTOMATIC);
PIDx.SetOutputLimits(mn,mx);
delay(40);
PIDy.SetMode(AUTOMATIC);
PIDy.SetOutputLimits(mn,mx);
delay(40);



}

void loop() {
 TSPoint p=ts.getPoint();
  X=p.x;
  Y=p.y;
  inputx=X;
  inputy=Y;
  if(p.z>ts.pressureThreshhold)
  {PIDx.Compute();
  ServoX.write(outputx);
   PIDy.Compute();
   ServoY.write(outputy);
  }
   /*Serial.print("X= ");
 Serial.print(X);
 Serial.print(" Y=");
 Serial.print(Y);
 delay(1000);
  Serial.println();*/
  
  
  // put your main code here, to run repeatedly:

}
