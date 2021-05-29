
#define PWMA 5 
#define PWMB 10
#define AIN1 6
#define AIN2 7
#define BIN1 8
#define BIN2 9

int motorSpeed = 100; 
int motorSped = 100; 
void koleso1(){
     digitalWrite(AIN2, LOW);      
     digitalWrite(AIN1, HIGH);    
     digitalWrite(BIN2, LOW);  
     digitalWrite(BIN1, HIGH); 
     analogWrite(PWMB, motorSpeed);  
     delay(1000);
}
void koleso2(){
     digitalWrite(AIN1, LOW);      
     digitalWrite(AIN2, HIGH);    
     digitalWrite(BIN1, LOW);  
     digitalWrite(BIN2, HIGH); 
     analogWrite(PWMB, motorSped);  
     delay(1000);
}
void setup() {
    pinMode(PWMA, OUTPUT);  
    pinMode(PWMB, OUTPUT);  
    pinMode(AIN1, OUTPUT);  
    pinMode(AIN2, OUTPUT);  
    pinMode(BIN1, OUTPUT);  
    pinMode(BIN2, OUTPUT);  
    pinMode(STBY, OUTPUT); 
}

void loop() {
 koleso1();
 koleso2();
     digitalWrite(STBY, LOW);     
     delay(10000);
     digitalWrite(STBY, HIGH);
}
