#define RED 4
#define YELLOW 3
#define GREEN 2
#define BUTTON 8

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);

  pinMode(BUTTON, INPUT_PULLUP);

  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);

}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    delay(1000);
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    delay(1000);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);
    delay(1000);
  }
}
