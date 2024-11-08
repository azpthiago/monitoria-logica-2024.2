#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  // Problema: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a classificação desta glicose de acordo com a tabela de referência 
  // Normal Até 100mg/dl | Elevado maior que 100 e até 140mg/dl | Diabetes maior de 140mg/dl

  int valorGlicose;

  printf("+ Digite o quantidade de glicose no sangue: ");
  scanf("%i", &valorGlicose);

  if (valorGlicose > 0 && valorGlicose <= 100) {
    printf("-> Nivel de glícose: Normal");
  }

  if (valorGlicose > 100 && valorGlicose <= 140) {
    printf("-> Nivel de glícose: Elevado");
  }

  if (valorGlicose >= 140) {
    printf("-> Nivel de glícose: Diabetes");
  }

  return 0;
}
