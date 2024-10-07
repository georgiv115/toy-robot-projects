char a;
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define ENA 3
#define ENB 11
int A = 255;
int B = 255;
void FORWARD(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B);
  analogWrite(ENA,A);

}
void FORWARD-RIGHT(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B);
  analogWrite(ENA,A/2);
}
void FORWARD-LEFT(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B/2);
  analogWrite(ENA,A);
}
void BACK-RIGHT(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,B);
  analogWrite(ENA,A/2);
}
void BACK-LEFT(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,B/2);
  analogWrite(ENA,A);
}
void BACK(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,B);
  analogWrite(ENA,A);
}
void RIGHT(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B);
  analogWrite(ENA,A);
}
void LEFT(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B);
  analogWrite(ENA,A);
  
}
void STOP(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,B);
  analogWrite(ENA,A);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()){
a=Serial.read();
Serial.println(a);
delay(100);
}
if (a=='F'){FORWARD();}
if (a=='B'){BACK();}
if (a=='S'){STOP();}
if (a=='L'){LEFT();}
if (a=='R'){RIGHT();}
if (a=='G'){FORWARD-LEFT();}
if (a=='I'){FORWARD-RIGHT();}
if (a=='H'){BACK-LEFT();}
if (a=='J'){BACK-RIGHT();}

}
