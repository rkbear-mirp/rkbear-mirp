
#define YP A0
#define YN A2
#define XP A1
#define XN A3
#define Xresolution 740//128
#define Yresolution 645//64

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int X,Y; //Touch Coordinates are stored in X,Y variable
   pinMode(YP,INPUT);
   digitalWrite(YP,HIGH);
   pinMode(YN,INPUT);  
   digitalWrite(YN,LOW);
   pinMode(XP,OUTPUT);
   digitalWrite(XP,HIGH);
   pinMode(XN,OUTPUT);
   digitalWrite(XN,LOW);
   X = (analogRead(YP))/(740/Xresolution); //Reads X axis touch position
    
   pinMode(XP,INPUT);
   digitalWrite(XP,HIGH);
   pinMode(XN,INPUT);
   digitalWrite(XN,LOW);
   pinMode(YP,OUTPUT);
   digitalWrite(YP,HIGH);
   pinMode(YN,OUTPUT);
   digitalWrite(YN,LOW);
   Y = (analogRead(XP))/(645/Yresolution); //Reads Y axis touch position
  
  //Display X and Y on Serial Monitor
   Serial.print("X = ");  
   Serial.print(X);
   Serial.print(" Y = ");
   Serial.println(Y);
   delay(100);
}

