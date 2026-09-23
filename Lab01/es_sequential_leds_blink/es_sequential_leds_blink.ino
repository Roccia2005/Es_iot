#define RED 13
#define GREEN 12
#define YELLOW 11

void setup() {
  pinMode(RED, OUTPUT);  
  pinMode(GREEN, OUTPUT);  
  pinMode(YELLOW, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED, HIGH);
  delay(200);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(200);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(200);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(200);
  digitalWrite(GREEN, LOW);
}
