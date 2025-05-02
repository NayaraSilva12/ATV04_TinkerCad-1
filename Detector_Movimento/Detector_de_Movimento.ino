int pinoSensor = 2;
int pinoLed = 4;

void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int movimento = digitalRead(pinoSensor);
  Serial.println(movimento);  // Mostra 1 ou 0 no Serial Monitor

  if (movimento == HIGH) {
    digitalWrite(pinoLed, HIGH);
  } else {
    digitalWrite(pinoLed, LOW);
  }

  delay(100);
}
