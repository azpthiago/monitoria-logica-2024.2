// Importa biblioteca referente a entrada e saida de dados
#include <stdio.h>
// Importa biblioteca referente a localiza��o
#include <locale.h> 
int main () {
  // Indica pro compilador de C utilizar a linguagem portuguesa
  // Fazendo com que ele aceite acentua��o.
  setlocale(LC_ALL, "Portuguese"); 
  // Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
  int valor = 0;

  printf("-> Digite o valor desejado: ");
  scanf("%d", &valor); // Para ler o valor precisa-se colocar o & na vari�vel realizando a referencia dela.

  printf("-> O de %d antecessor � %d", valor ,valor - 1);

  return 0;
}