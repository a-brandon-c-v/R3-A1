//Motor1 
const int MotorPin1=5;
const int MotorPin2=6;
//Motor 2
const int MotorPin3=10;
const int MotorPin4=9;
//Switch
const int PinDSwitch1= 12;
const int PinDSwitch2= 11;
const int PinDSwitch3= 4;
const int PinDSwitch4= 3;



void setup()
{ 

  
  pinMode(PinDSwitch1, INPUT_PULLUP);
  pinMode(PinDSwitch2, INPUT_PULLUP);
  pinMode(PinDSwitch3, INPUT_PULLUP);
  pinMode(PinDSwitch4, INPUT_PULLUP);
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  pinMode(MotorPin4, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  Serial.println(digitalRead(PinDSwitch1));
  Serial.println(digitalRead(PinDSwitch2));
  Serial.println(digitalRead(PinDSwitch3));
  Serial.println(digitalRead(PinDSwitch4));
  

if (digitalRead(PinDSwitch1)== LOW && digitalRead(PinDSwitch2)== LOW && digitalRead(PinDSwitch3)== LOW && digitalRead(PinDSwitch4)== LOW)
 {
  Serial.println("Forwards");
 //Turn Motor1 and Motor 2 FWD (CWX2) for 5 sec
  digitalWrite(MotorPin1, HIGH); //M1 (LEFT)
  digitalWrite(MotorPin2, LOW);  
  digitalWrite(MotorPin3, HIGH); //M2 (RIGHT)
  digitalWrite(MotorPin4, LOW);
} 

else if (digitalRead(PinDSwitch1)== HIGH && digitalRead(PinDSwitch2)== LOW && digitalRead(PinDSwitch3)== LOW && digitalRead(PinDSwitch4)== LOW){
  Serial.println("Backwards");
  //Turn Motor1 and Motor 2 BACKWARDS (CCWX2) for 5 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);  
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
}
else if (digitalRead(PinDSwitch1)== HIGH && digitalRead(PinDSwitch2)== HIGH && digitalRead(PinDSwitch3)== LOW && digitalRead(PinDSwitch4)== LOW){
   Serial.println("left");
   //Turn Motor1 and Motor 2 LEFT for 5 (CW X CCW)sec
  digitalWrite(MotorPin1, LOW);//M1 LEFT
  digitalWrite(MotorPin2, HIGH);  
  digitalWrite(MotorPin3, HIGH);//M2 RIGHT
  digitalWrite(MotorPin4, LOW);
}
  
else if (digitalRead(PinDSwitch1)== HIGH && digitalRead(PinDSwitch2)== HIGH && digitalRead(PinDSwitch3)== HIGH && digitalRead(PinDSwitch4)== LOW){
  Serial.println("right");
 //Turn Motor1 and Motor 2 RIGHT (CCW X CW) for 5 sec 
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);  
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
}
  
else if (digitalRead(PinDSwitch1)== HIGH && digitalRead(PinDSwitch2)== HIGH && digitalRead(PinDSwitch3)== HIGH && digitalRead(PinDSwitch4)== HIGH){
 
  Serial.println("Stop");
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);  
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
 }
  
  
}
  
  
  

  //I've decided to have full stops btw every main command 
  //for the user to view the difference of each action
  //something to highlight is that both motors have to be
  //facing the same way and switch routing of motor on the top 
  //M1 LEFT 
  //This way the logic of the motors will be as follows: 
  //positive rpm= cw= both motors=moving fwd
  //negative rpm =ccw= both motors=moving bckwd
  //oposite rpm=cw vs ccw; ccw vs cw =left or right move
  

  
  
 

