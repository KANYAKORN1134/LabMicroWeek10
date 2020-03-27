#define MOTORD1_PIN 7
#define MOTORD2_PIN 8
#define MOTORPWM_PIN 6
void setup() {
  pinMode(8, OUTPUT);   
  pinMode(7, OUTPUT);   
  pinMode(6, OUTPUT); 
  Serial.begin(9600);
} 
void setVelocity(int v) {
  if(v > 0 && v < 256){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(6, v);
    delay(1000);
  }
  if(v < 0 && v > -256){
    v = v*(-1);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    analogWrite(6, v);
    delay(1000);
  }
  else{
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
}
void loop() {
  setVelocity(255);
  setVelocity(-255);
  setVelocity(0);
}
