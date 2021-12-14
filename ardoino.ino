//const int potPin = A0;

//int buttonState, potVal;

// Setup runs once after arduino boots up
void setup() {
  // Set the data rate in bits per second (baud) for serial data transmission
  Serial.begin(9600);
  
  // For digital pins it's also possible to send data but here we are receiving data from pin. Digital pin has two values - HIGH and LOW
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

// Infinite loop for event listening
void loop() {
  
  int buttonState2 = digitalRead(2);
  int buttonState3 = digitalRead(3);
  int buttonState4 = digitalRead(4);
  int buttonState5 = digitalRead(5);
  int buttonState6 = digitalRead(6);
  int buttonState7 = digitalRead(7);
  int buttonState8 = digitalRead(8);
  //potVal = analogRead(potPin);
  //Serial.print("potVal: ");
  //Serial.println(potVal);

  if (buttonState2 == HIGH) {
    Serial.println("0 pressed");
  }
  if (buttonState3 == HIGH) {
    Serial.println("1 pressed");
  }
  if (buttonState4 == HIGH) {
    Serial.println("2 pressed");
  }
  if (buttonState5 == HIGH) {
    Serial.println("3 pressed");
  }
  if (buttonState6 == HIGH) {
    Serial.println("4 pressed");
  }
  if (buttonState7 == HIGH) {
    Serial.println("5 pressed");
  }
  if (buttonState8 == HIGH) {
    Serial.println("6 pressed");
  }
  delay(200);
}


Message Andrus Pajuniit








