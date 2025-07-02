// Pinos
const int pinoLDR = A4;
const int pinoBuzzer = 3;

// Limite para detectar escuridão
const int limiteLuz = 42700; // Ajustado com base nos testes

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  Serial.begin(9600);
  tocarMusica();
}

void loop() {
  int valorLuz = analogRead(pinoLDR);
  Serial.println(valorLuz);

  if (valorLuz < limiteLuz) {
    // Está escuro, parar som
    noTone(pinoBuzzer);
  } else {
    // Está claro, tocar música
    tocarMusica();
  }

  delay(500); // Pequeno intervalo para evitar leituras muito rápidas
}

void tocarMusica() {
  // Melodia simples
  tone(pinoBuzzer, 440, 300); // Lá
  delay(300);
  tone(pinoBuzzer, 494, 300); // Si
  delay(300);
  tone(pinoBuzzer, 523, 300); // Dó
  delay(300);
}
