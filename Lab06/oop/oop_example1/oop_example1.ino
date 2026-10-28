#include "counter.h"

Counter c(10); // dichiarazione statica, è già inizializzato
Counter* c1;

void setup(){
  Serial.begin(9600); 
  // Viene inizializzata qui perchè il puntatore inizialmente punta a NULL
  c1 = new Counter(20);
}

void loop(){
  int x = 0;
  
  c.inc();
  Serial.println(c.getValue());
  c1->inc();
  Serial.println(c1->getValue());
  delay(200);

  
  Counter* c3 = new Counter(micros());
  Serial.println(c3->getValue());
  delete c3; // Ricordati di deallocare gli oggetti quando li crei nel superloop

  Counter c2(10);
  c2.inc();
  //Un oggetto statico non ha bisogno di delete
    
}
