int outputPinIds[8] = {46, 47, 48, 49, 50, 51, 52, 53};


void setup() {
  for (int i=0; i<8; i++) pinMode(outputPinIds[i],OUTPUT);
  Serial.begin(115200);
  Serial.println("Starting...");
}

void loop() {
 lightPin(0);
}

void lightPin(int pinNum){
  digitalWrite(outputPinIds[pinNum], HIGH);
  delay(500);
  digitalWrite(outputPinIds[pinNum], LOW);
}
