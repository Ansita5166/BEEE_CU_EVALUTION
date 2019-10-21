const int buttonPin = 2;
const int buttonPin2 = 4;
const int ledPin = 7;
const int ledPin2 = 13;

int buttonState = 0;
int buttonState1 = 0;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop(){
  buttonState = digitalRead(2);
  if(buttonState == HIGH){
    digitalWrite(7,HIGH);
    delay(20);
  }else{
    digitalWrite(7,LOW);
  }
  buttonState = digitalRead(4);
  if(buttonState == HIGH){
    digitalWrite(13,HIGH);
    delay(40);
  }else{
    digitalWrite(13,LOW);
  }
}