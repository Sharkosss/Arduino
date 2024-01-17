void setup() {
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 

}

void loop() {
  int light = analogRead(A0);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  
  if (light < 200) {
    digitalWrite(2, HIGH);
  }
  else if (light < 400){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(4, HIGH);
  }

 

}
