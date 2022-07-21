//código exemplo para o acionamento de motor brushless
#include <Servo.h> //inclui a biblioteca Servo

Servo ESC; //cria o objeto ESC
int pot = A5; //informa ao arduino onde o potenciômetro está conectado

void setup(){
  ESC.attach(6); //informa que o ESC está conectado ao pino digital 6
}
void loop(){
 int valor = analogRead(pot); //faz a leitura do potenciômetro
 valor = map(valor, 0, 1023, 0, 179); //associa o valor lido à velocidade do motor 
 ESC.write(valor); //envia os valores recebidos ao ESC
}