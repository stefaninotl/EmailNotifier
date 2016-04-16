#define LED 7 
void setup() {
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);
}

//Main Loop

void loop() {

  if (Serial.available() > 0) {
  int comando = Serial.read(); 
  
    if (comando == 1)
    {
    digitalWrite(LED, HIGH); 
    }
    else
    {
    digitalWrite(LED, LOW); 
    }
    //-----------------------------------------------------------------------------
  
  Serial.flush();
  delay(2000);                 
  }
} 
