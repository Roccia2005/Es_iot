#define LED_PIN 13
// Noi non lo vediamo ma il file che contiene queste funzioni è implicitamente incluso
// #include <Arduino.h>

void setup() {
  // voglio configurare il pin 13 in modalità output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Notiamo che non lavoro con il voltaggio ma lavoro con lo stato del Pin, che può essere alto o basso
  digitalWrite(LED_PIN, HIGH);
  // il delay è in millisecondi ma è possibile usar anche i microsecondi
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
