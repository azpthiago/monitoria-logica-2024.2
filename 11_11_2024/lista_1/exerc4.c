#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio.

  float salario, salarioReajustado, percentualReajuste;

  printf("+ Digite o teu sal�rio atual: ");
  scanf("%f", &salario);

  printf("+ Digite o percentual de reajuste: ");
  scanf("%f", &percentualReajuste);


  salarioReajustado = salario + (salario * (percentualReajuste / 100));

  printf("-> O seu novo sal�rio � de: R$%.2f", salarioReajustado);

  return 0;
}