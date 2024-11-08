#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5..

  float primeiraNota, segundaNota, terceiraNota, media;

  printf("+ Digite a primeira nota: ");
  scanf("%f", &primeiraNota);

  printf("+ Digite a segunda nota: ");
  scanf("%f", &segundaNota);

  printf("+ Digite a terceira nota: ");
  scanf("%f", &terceiraNota);

  media = (primeiraNota*2 + segundaNota*3 + terceiraNota*5)/ 10;

  printf("-> A sua média é de: %.2f", media);

  return 0;
}