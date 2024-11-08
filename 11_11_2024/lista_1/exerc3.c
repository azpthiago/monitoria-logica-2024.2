#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores.

  int totalEleitores, votosBrancos, votosNulos, votosValidos;
  double percentBrancos, percentNulos, percentValidos;

  printf("-> Digite o total de eleitos: ");
  scanf("%i", &totalEleitores);

  printf("-> Digite o total de votos brancos: ");
  scanf("%i", &votosBrancos);

  printf("-> Digite o total de votos nulos: ");
  scanf("%i", &votosNulos);

  printf("-> Digite o total de votos validos: ");
  scanf("%i", &votosValidos);


  percentBrancos = (votosBrancos * 100) / totalEleitores;
  percentNulos = (votosNulos * 100) / totalEleitores;
  percentValidos = (votosValidos * 100) / totalEleitores;

  printf("+ Percentual Brancos -> %.2f%%\n", percentBrancos);
  printf("+ Percentual Nulos -> %.2f%%\n", percentNulos);
  printf("+ Percentual Validos -> %.2f%%\n", percentValidos);

  return 0;
}