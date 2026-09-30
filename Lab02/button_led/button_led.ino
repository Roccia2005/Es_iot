#define LED_PIN 13
#define BUTTON_PIN 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("ON");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("OFF");
  }
}
