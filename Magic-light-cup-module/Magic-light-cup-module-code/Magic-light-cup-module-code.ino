
int switchPin = 2;
int LEDPin = 3;

void setup() {
pinMode(switchPin, INPUT_PULLUP);
pinMode(LEDPin, OUTPUT);
}

void loop() {
if (digitalRead(switchPin) == LOW) {
digitalWrite(3, HIGH);

} else {
digitalWrite(3, LOW);
}
}