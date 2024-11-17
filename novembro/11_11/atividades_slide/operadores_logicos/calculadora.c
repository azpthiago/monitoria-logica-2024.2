#include <stdio.h>

int main() {
  int primeiroValor, segundoValor, opcaoMenu;
  double resultado;

  printf("+ Calculadora +\n");
  printf("+ [1] - Soma\n");
  printf("+ [2] - Divis�o\n");
  printf("+ [3] - Subtra��o\n");
  printf("+ [4] - Multiplica��o\n");
  printf("+ Escolha uma das op��es: ");
  scanf("%i", &opcaoMenu);

  switch (opcaoMenu) {
    case 1:
      printf("+ Digite o primeiro valor: ");
      scanf("%i", &primeiroValor);
      printf("+ Digite o segundo valor: ");
      scanf("%i", &segundoValor);
      resultado = primeiroValor + segundoValor;
      break;
    case 2:
      printf("+ Digite o primeiro valor: ");
      scanf("%i", &primeiroValor);
      printf("+ Digite o segundo valor: ");
      scanf("%i", &segundoValor);
      resultado = primeiroValor / segundoValor;
      break;
    case 3:
      printf("+ Digite o primeiro valor: ");
      scanf("%i", &primeiroValor);
      printf("+ Digite o segundo valor: ");
      scanf("%i", &segundoValor);
      resultado = primeiroValor - segundoValor;
      break;
    case 4:
      printf("+ Digite o primeiro valor: ");
      scanf("%i", &primeiroValor);
      printf("+ Digite o segundo valor: ");
      scanf("%i", &segundoValor);
      resultado = primeiroValor * segundoValor;
      break;
    default:
      printf("-> Op��o invalida");
      break;
  }

  printf("-> Resultado: %.2lf", resultado);

  return 0;
}