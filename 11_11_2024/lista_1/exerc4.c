#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

  float salario, salarioReajustado, percentualReajuste;

  printf("+ Digite o teu salário atual: ");
  scanf("%f", &salario);

  printf("+ Digite o percentual de reajuste: ");
  scanf("%f", &percentualReajuste);


  salarioReajustado = salario + (salario * (percentualReajuste / 100));

  printf("-> O seu novo salário é de: R$%.2f", salarioReajustado);

  return 0;
}