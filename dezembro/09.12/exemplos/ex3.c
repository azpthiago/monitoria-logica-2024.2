#include <stdio.h>

struct Pessoa {
  char nome[50];
  int idade;
};

int main() {
  struct Pessoa pessoas[3];

  // Lendo os dados do usuário
  for (int i = 0; i < 3; i++) {
    printf("Informe o nome da pessoa %d: ", i + 1);
    scanf(" %[^\n]", pessoas[i].nome);  // Lendo string com espaço
    printf("Informe a idade da pessoa %d: ", i + 1);
    scanf("%d", &pessoas[i].idade);
  }

  // Exibindo os dados
  printf("\n--- Lista de Pessoas ---\n");
  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d\n", i + 1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n\n", pessoas[i].idade);
  }

  return 0;
}
