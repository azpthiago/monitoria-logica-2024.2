#include <stdio.h>

int main() {
  // Problema: Leia um valor inteiro N. Este valor ser� a quantidade de n�meros
  // inteiros que ser�o lidos em seguida. Para cada valor lido, mostre uma
  // mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m se � POSITIVO
  // ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever�
  // imprimir apenas NULO.

  int quantidade, valor;

  printf("+ Digite a quantidade de valores desejada: ");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++) {
    printf("+ Digite o %d valor: ", i + 1);
    scanf("%d", &valor);

    // Inicia valida��o verificando se o valor � igual a 0
    if (valor == 0) {
      printf("-> Nulo\n");
    } else {
      // Valida se o n�mero � positivo ou negativo com um IF
      if (valor > 0) {
        printf("-> Positivo ");
      } else {
        printf("-> Negativo ");
      }

      // Valida se o n�mero � par ou impar com um IF
      if (valor % 2 == 0) {
        printf("e Par\n");
      } else {
        printf("e �mpar\n");
      }
    }
  }

  return 0;
}
