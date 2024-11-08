#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  // Problema: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, você deveconstruir um programa que leia a letra C ou F; indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.

  double temperaturaOriginal, temperaturaConvertida;
  char opcaoMenu;
  printf("+ Conversor de temperaturas +\n");
  printf("\n+ Escolha uma das opções abaixo\n");
  printf("+ C: Converter Celcius para Fahrenheit\n");
  printf("+ F: Converter Fahrenheit par Celsius\n");
  printf("Opção: ");
  scanf("%c", &opcaoMenu);

  if (opcaoMenu == 'C' || opcaoMenu == 'c') {
    printf("Digite a temperatura desejada: ");
    scanf("%lf", &temperaturaOriginal);

    temperaturaConvertida = (temperaturaOriginal * 9/5) + 32;
  }else if (opcaoMenu == 'F' || opcaoMenu == 'f') {
    printf("Digite a temperatura desejada: ");
    scanf("%lf", &temperaturaOriginal);

    temperaturaConvertida = (temperaturaOriginal - 32) * 5/9;
  }

  printf("-> Temperatura convertida é %.1lf", temperaturaConvertida);

  return 0;
}
