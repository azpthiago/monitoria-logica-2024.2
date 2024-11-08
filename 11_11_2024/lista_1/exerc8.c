#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

  const int percentualDistribuidor = 0.28;
  const float percentualImpostos = 0.45;
  float custoCarro, valorFinal;

  printf("+ Digite o valor de fábrica do carro: ");
  scanf("%f", &custoCarro);

  valorFinal = custoCarro + (custoCarro * percentualDistribuidor) + (custoCarro * percentualImpostos);

  printf("-> Valor final do carro: R$%.2f", valorFinal); 

  return 0;
}