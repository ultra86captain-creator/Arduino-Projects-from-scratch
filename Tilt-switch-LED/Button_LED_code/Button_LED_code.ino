
int TiltPin = 2;
int LEDPin = 8;

void setup() {
pinMode(TiltPin, INPUT_PULLUP);
pinMode(LEDPin, OUTPUT);
}

void loop() {
if (digitalRead(TiltPin) == LOW) {
digitalWrite(8, HIGH);

} else {
digitalWrite(8, LOW);
}
}