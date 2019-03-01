#define redpin 11
#define greenpin 10
#define bluepin 6

void setup(){
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  
}
//RED
void loop(){
  analogWrite(redpin, 255);
  analogWrite(greenpin, 0);
  analogWrite(bluepin, 0);
  delay(600);
//GREEN
  analogWrite(redpin, 0);
  analogWrite(greenpin, 255);
  analogWrite(bluepin, 0);
  delay(600);
//BLUE 
  analogWrite(redpin, 0);
  analogWrite(greenpin, 0);
  analogWrite(bluepin, 255);
  delay(600);
}
