// C++ code
//
const int pinoSensor = 3;
const int pinoRele = 2;

void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoRele, OUTPUT);
  digitalWrite(pinoRele, LOW);
}

void loop() {
  int movimento = digitalRead(pinoSensor);

  if (movimento == HIGH) {
    digitalWrite(pinoRele, HIGH);
    delay(3000);
    digitalWrite(pinoRele, LOW);
  }

  delay(100);
}
