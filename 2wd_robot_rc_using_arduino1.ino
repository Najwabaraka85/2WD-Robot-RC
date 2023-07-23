int en1 = 10 ;
int in1 = 9 ;
int in2 = 8 ;
int in3 = 7 ;
int in4 = 6 ;
int en2 = 5 ;
char i ;
void setup() {
  Serial.begin(9600);
  //PINS OF MOTOR DRIVE
  for ( int i = 5 ; i<11 ; i++)
  { pinMode(i , OUTPUT );}
  }
// FOR EACH MOVEMENT THERE IS A FUNCTION
void forword(){
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1,128);
analogWrite(en2,128);
}
void backword(){
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(en1,128);
analogWrite(en2,128);
}
void right(){
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
analogWrite(en1,128);
analogWrite(en2,128);
}
void left(){
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1,128);
analogWrite(en2,128);
}
void loop() {
if (Serial.available()>0)
  {i = Serial.read();
  switch (i){
  case 'f' : forword();
  break;
  case 'b' : backword();
  break;
  case 'r' : right();
  break;
  case 'l' : left();
  break;
  }
  }
}