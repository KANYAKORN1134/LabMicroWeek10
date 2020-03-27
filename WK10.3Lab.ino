#define PINA 2
#define PINB 3
int DIFF = 0;
int ENA = 0;
int ENB = 0;

void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop(){
  ENA = digitalRead(2);
  ENB = digitalRead(3);
  if(DIFF == 0 && ENA == 1){
    if(ENB == 1){
      Serial.println("Counterclockwise");
    }
    if(ENB == 0){
      Serial.println("Clockwise");
    }
}
  DIFF = ENA;
}
