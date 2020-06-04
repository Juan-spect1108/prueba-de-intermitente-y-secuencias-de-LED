int LED= 11;
int RETARDO= 1000;

void setup() {
pinMode(LED, OUTPUT);

}

void loop() {
digitalWrite(LED, HIGH);
delay(RETARDO);
digitalWrite(LED, LOW);
delay(RETARDO);

}
