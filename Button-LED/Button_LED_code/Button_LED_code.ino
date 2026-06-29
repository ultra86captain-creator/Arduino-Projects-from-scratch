
int buttonPin = 2;
int LEDPin = 8;

void setup() {
pinMode(buttonPin, INPUT_PULLUP);
pinMode(LEDPin, OUTPUT);
}

void loop() {
if (digitalRead(buttonPin) == LOW) {
digitalWrite(8, HIGH);

} else {
digitalWrite(8, LOW);
}
}