#define BUTTON_PIN 2
#define DEBOUNCING_INTERVAL 200

volatile int count; //lo mettiamo volatile in modo che non venga messo nella cash
int lastCountPrinted;
unsigned long previousPressedTime;

void setup(){
  pinMode(BUTTON_PIN, INPUT);
  count = 0;
  lastCountPrinted = 0;
  previousPressedTime = 0;
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), inc, RISING); 
  //RISING triggera quando il pin passa da LOW to HIGH
}

void loop(){
  noInterrupts(); 
  int currentCount = count;
  interrupts();
  if(currentCount != lastCountPrinted) {
    Serial.println(String("count: ") + currentCount + " - " + previousPressedTime);
    lastCountPrinted = currentCount;
  }
  /*
  delay(1000) 
  Il delay qui causerebbe un problema.  Premendo più volte consecutive
  entro il tempo del delay il counter stampato avrà dei salti perchè il loop viene freezato, 
  ma la funzione in no
  */
}

void inc(){
  /*
  Questa soluzione potrebbe creare problemi perchè il tempo si ferma
  count++;
  delay(100)
  */
  //Prendo il tempo attuale di quando viene premuto il bottone e guardo se è passato un certo tempo dall'ultima
  // volta che è stato premuto, se questa condizione non è rispettata siamo in un bound
  unsigned long currentTime = millis();
  if (currentTime - previousPressedTime > DEBOUNCING_INTERVAL) {
    count++;
    previousPressedTime = currentTime;
  }
}