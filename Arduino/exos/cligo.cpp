#define RED 4

#define BUTTON 8

void setup() {
  // put your setup code here, to run once:

  pinMode(RED, OUTPUT);

  pinMode(BUTTON, INPUT_PULLUP);

  
 

}

void loop() {


  
  if (digitalRead(BUTTON) == LOW) {
    digitalWrite(RED, HIGH);
    delay(500);
    digitalWrite(RED, LOW);
    delay(500);
    digitalWrite(RED, HIGH);

  }
  else {
    digitalWrite(RED, HIGH);
    delay(1000);
    digitalWrite(RED, LOW);
    delay(1000);
    digitalWrite(RED, HIGH);
  }
}
