#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5..

  float primeiraNota, segundaNota, terceiraNota, media;

  printf("+ Digite a primeira nota: ");
  scanf("%f", &primeiraNota);

  printf("+ Digite a segunda nota: ");
  scanf("%f", &segundaNota);

  printf("+ Digite a terceira nota: ");
  scanf("%f", &terceiraNota);

  media = (primeiraNota*2 + segundaNota*3 + terceiraNota*5)/ 10;

  printf("-> A sua m�dia � de: %.2f", media);

  return 0;
}