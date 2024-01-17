const int light = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-C3!");
  pinMode(4, OUTPUT);
  pinMode(light, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light2 = analogRead(light);
  Serial.println(light2);

  int brightness = map(light2, 0, 1023, 0, 255);
  analogWrite(4, brightness);
  delay(500);
}
