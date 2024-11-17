#include <stdio.h>

int main() {
  // Problema: Leia um valor inteiro N. Este valor será a quantidade de números
  // inteiros que serão lidos em seguida. Para cada valor lido, mostre uma
  // mensagem dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO
  // ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá
  // imprimir apenas NULO.

  int quantidade, valor;

  printf("+ Digite a quantidade de valores desejada: ");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++) {
    printf("+ Digite o %d valor: ", i + 1);
    scanf("%d", &valor);

    // Inicia validação verificando se o valor é igual a 0
    if (valor == 0) {
      printf("-> Nulo\n");
    } else {
      // Valida se o número é positivo ou negativo com um IF
      if (valor > 0) {
        printf("-> Positivo ");
      } else {
        printf("-> Negativo ");
      }

      // Valida se o número é par ou impar com um IF
      if (valor % 2 == 0) {
        printf("e Par\n");
      } else {
        printf("e Ímpar\n");
      }
    }
  }

  return 0;
}
