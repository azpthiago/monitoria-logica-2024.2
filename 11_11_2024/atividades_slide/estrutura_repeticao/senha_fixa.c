#include <stdio.h>

int main() {
  const int senhaFixa = 2024;
  int senha = 0;

  while (senha != 2024) {
    printf("+ Digite a senha: ");
    scanf("%i", &senha);

    if (senha != senhaFixa) {
      printf("-> Senha invalida! Tente novamente\n");
    }
  }

  printf("Acesso permitido!");

  return 0;
}