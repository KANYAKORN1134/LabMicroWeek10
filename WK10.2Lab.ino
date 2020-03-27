#define PINA 2
int count = 0;

void setup(){
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),
                  ISR_Ext, RISING);
  Serial.begin(9600);
  Serial.println("Test Encoder");
}
void loop(){
  Serial.println(count);
  delay(500);
}
void ISR_Ext(){
   count++;
}
