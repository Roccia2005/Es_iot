#define LED_PIN 10

int intensity;
int direction;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  intensity = 1;
  direction = 1;
  Serial.begin(9600);
}

void loop() {
  fading();
  Serial.println(intensity);
  analogWrite(LED_PIN, intensity);
}

void fading(){
  if (intensity == 255 || intensity == 0) {
    direction = -direction;
  }
  intensity += direction;
}
