// Definindo os pinos dos LEDs
const int ledVerde = 7;
const int ledAmarelo = 6;
const int ledVermelho = 4;

void setup() {
  // Configurando os pinos como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // LED Verde - Siga (1 minuto)
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(60000);  // 60.000 milissegundos = 1 minuto

  // LED Amarelo - Atenção (1 minuto)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(60000);  // 1 minuto

  // LED Vermelho - Pare (1 minuto)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(60000);  // 1 minuto
}

