#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante perderá e exiba o total em dias.

  int qtdCigarros, qtdAnosFumados, totalCigarros, totalMinutos;
  float totalDias;

  printf("+ Digite a quantidade de cigarros fumados p/dia: ");
  scanf("%i", &qtdCigarros);

  printf("+ Digite a quantidade de anos que você fuma: ");
  scanf("%i", &qtdAnosFumados);

  totalCigarros = qtdCigarros * (qtdAnosFumados * 365);
  totalMinutos = totalCigarros * 10;
  totalDias = totalMinutos / 1440;

  printf("-> Total de dias perdiso: %.1f", totalDias);

  return 0;
}