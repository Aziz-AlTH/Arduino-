const byte btnPins[] = {2, 8, 7};     
const byte ledPins[] = {13, 12, 11};  

byte  ledState[]  = {LOW, LOW, LOW};     
bool  lastState[] = {HIGH, HIGH, HIGH};  

void setup() {
  for (byte i = 0; i < 3; i++) {
    pinMode(btnPins[i], INPUT_PULLUP);    
    pinMode(ledPins[i], OUTPUT);          
    digitalWrite(ledPins[i], ledState[i]);
  }
}

void loop() {
  for (byte i = 0; i < 3; i++) {
    bool current = digitalRead(btnPins[i]);
    if (lastState[i] == HIGH && current == LOW) {
      ledState[i] = !ledState[i];                    
      digitalWrite(ledPins[i], ledState[i]);         
      delay(20);                                     
    }
    lastState[i] = current;
  }
}