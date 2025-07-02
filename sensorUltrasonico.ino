//Programa: Sensor ultrassônico Arduino acender LED
//Autor: Luan Alves - www.guiarobotica.com
#include "Ultrasonic.h"
Ultrasonic ultrasonic(3, 2); // Trigger na porta 3 e Echo na porta 2

//Declarando os LED como constantes em seus respectivos pinos
const int ledVerde = 4;
const int ledAmarelo = 5;
const int ledVermelho = 6;

long microsec = 0; // variaveis de controle
float distanciaCM = 0;

void setup() {
  Serial.begin(9600); //Inicializando o serial monitor
  pinMode(ledVerde, OUTPUT); //declarando os LEDs como saida
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // Lendo a distância em centímetros
  distanciaCM = ultrasonic.distanceRead();

  ledDistancia();
  Serial.print(distanciaCM);
  Serial.println(" cm");
  delay(500);
}

void ledDistancia() {

  //Desliga todos os LEDs
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);

  // criando as condicoes se a distancia for entre 30 cm e 20 cm
  if (distanciaCM <= 30 and distanciaCM >= 20) {
    digitalWrite(ledVerde, HIGH); //liga o LED verde
  }
  // se a distancia for 10 cm e 20 cm
  if (distanciaCM <= 20 and distanciaCM >= 10) {
    digitalWrite(ledAmarelo, HIGH); //liga LED amarelo
  }

  if (distanciaCM < 10) { // se a distancia for menor que 10 cm
    digitalWrite(ledVermelho, HIGH); // liga LED vermelho
  }
}
