#include <stdio.h>

int main() {
  // Problema: Leia um valor inteiro N. Este valor será a quantidade de valores
  // inteiros X que serão lidos em seguida. Mostre quantos destes valores X
  // estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
  // conforme exemplo.

  int quantidade, valor, dentro = 0, fora = 0;

  printf("+ Digite a quantidade de valores desejados: ");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++) {
    printf("+ Digite o %i valor: ", i + 1);
    scanf("%d", &valor);

    if (valor >= 10 && valor <= 20) {
      dentro++;
    } else {
      fora++;
    }
  }

  printf("-> Quantidade de valores dentro do intervalo [10,20]: %d\n", dentro);
  printf("-> Quantidade de valores fora do intervalo: %d\n", fora);

  return 0;
}
