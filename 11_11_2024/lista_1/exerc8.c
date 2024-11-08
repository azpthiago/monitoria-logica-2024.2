#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao consumidor.

  const int percentualDistribuidor = 0.28;
  const float percentualImpostos = 0.45;
  float custoCarro, valorFinal;

  printf("+ Digite o valor de f�brica do carro: ");
  scanf("%f", &custoCarro);

  valorFinal = custoCarro + (custoCarro * percentualDistribuidor) + (custoCarro * percentualImpostos);

  printf("-> Valor final do carro: R$%.2f", valorFinal); 

  return 0;
}