#define PIN_LED 2               //Definimos LED como 2

void setup() {
  
  pinMode(PIN_LED, OUTPUT);
  
}

void loop() {

  digitalWrite(PIN_LED, HIGH);  //Prender el LED
  delay(5000);                  //Delay de 5 segudos (a los 12ms ya no se ve el parpadeo)
  digitalWrite(PIN_LED, LOW);   //Apagar el LED
  delay(3000);                  //Delay de 3 segundos (a los 12ms ya no se ve el parpadeo)

}
