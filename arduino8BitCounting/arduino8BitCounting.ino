int outputPinIds[8] = {46,47,48,49,50,51,52,53};
int count = 0;

char countInBinary[8] = {0, 0, 0, 0, 0, 0, 0, 0,}; // Make an Array to hold the 8 Bits.
int arrayPosition = 0;         // Keep track of the position of each Bit.
int testInteger = 100;         // Any number from 0-255.
char * bitMode;
void setup() {
  for (int i=0; i<8; i++) pinMode(outputPinIds[i],OUTPUT);
  refreshPin();   
     Serial.begin(115200);
   Serial.println("working");
   
}

void loop() {
  delay(500);
  refreshPin();
}

void refreshPin(){
  for (int i=0; i<8; i++) digitalWrite(outputPinIds[i], LOW);
  count = count + 1;
   for (int element : countInBinary) // for each element in the array
      Serial.println(element);

  convertFromDecimalToBinary();
  for(int i = 0; i<8; i++){
    if(countInBinary[i] == 1){
      digitalWrite(outputPinIds[i], HIGH);
    }
  }
}

void convertFromDecimalToBinary(){
  testInteger = count;
  for(int a=128; a>=1; a=a/2){      // This loop will start at 128, then 64, then 32, etc.
    Serial.println(a);
    if((testInteger-a)>=0){         // This checks if the Int is big enough for the Bit to be a '1'
      countInBinary[arrayPosition]=1;  // Assigns a '1' into that Array position.
      testInteger-=a;
    }else{
      countInBinary[arrayPosition]=0;} // The Int was not big enough, therefore the Bit is a '0'
      arrayPosition++;                // Move one Character to the right in the Array.
  }
}
