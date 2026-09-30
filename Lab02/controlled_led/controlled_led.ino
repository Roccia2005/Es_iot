/*Any pin supporting PWM*/
#define LED_PIN 10

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value);

  //Vedere arduino doc per spigazione completa della funzione map
  int intensity = map(value, 0, 1023, 0, 255);
  analogWrite(LED_PIN, intensity);
}
