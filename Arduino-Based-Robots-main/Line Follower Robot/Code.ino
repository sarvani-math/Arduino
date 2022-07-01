// Define Sensor Pin
const int Sensor_L = 8;
const int Sensor_R = 7;

// Define Motor Pin
const int Motor_L_F = 2;
const int Motor_L_B = 3;
const int Motor_R_F = 4;
const int Motor_R_B = 5;

void Forward(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }

void Right(){
  //Stop Right Motor
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);

  //Run Left Motor in Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  
  }

void Left(){
  //Stop Left Motor
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }




void setup() {
  // put your setup code here, to run once:

  // Define Motor Pin as output
  pinMode(Motor_L_F, OUTPUT);
  pinMode(Motor_L_B, OUTPUT);
  pinMode(Motor_R_F, OUTPUT);
  pinMode(Motor_R_B, OUTPUT);

  // Define Sensor pin as input

  pinMode(Sensor_L, INPUT);
  pinMode(Sensor_R, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Sensor_L) == HIGH  &&  digitalRead(Sensor_R) == LOW){
    
    Left();
    
    }
  else if(digitalRead(Sensor_R) == HIGH && digitalRead(Sensor_L) == LOW){

    Right();
    
    }
  else
  Forward();

}
