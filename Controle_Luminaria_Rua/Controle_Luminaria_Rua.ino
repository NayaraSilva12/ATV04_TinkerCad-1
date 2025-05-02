// C++ code
//
const int pinoLDR = A0;
const int pinoRele = 2;
const int limiteLuz = 500;

void setup() {
  pinMode(pinoRele, OUTPUT);
  digitalWrite(pinoRele, LOW);
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(pinoLDR);
  Serial.println(valorLuz);

  if (valorLuz < limiteLuz) {
    digitalWrite(pinoRele, HIGH);
  } else {
    digitalWrite(pinoRele, LOW);
  }

  delay(500);
}
