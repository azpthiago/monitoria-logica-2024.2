#include <stdio.h>

int main() {
  int alcool = 0, gasolina = 0, disel = 0, opcaoMenu = 0;

  while (opcaoMenu != 4) {
    printf("+ Vote no seu produto favorito + \n");
    printf("+ [1] �lcool\n");
    printf("+ [2] Gasolina\n");
    printf("+ [3] Disel\n");
    printf("+ [4] Fim\n");
    printf("+ Escolha uma das op��es acima: ");
    scanf("%i", &opcaoMenu);
    switch (opcaoMenu) {
      case 1:
        printf("+ Voto em �lcol aceito!\n");
        alcool++;
        break;
      case 2:
        printf("+ Voto em gasolina aceito!\n");
        gasolina++;
        break;
      case 3:
        printf("+ Voto em disel aceito!\n");
        disel++;
        break;
      case 4:
        printf("Muito obrigado!\n");
        break;
      default:
        printf("+ Op��o inv�lida");
        break;
    }
  }
  printf("-> Total de votos <-\n");
  printf("-> �lcool: %i\n", alcool);
  printf("-> Gasolina: %i\n", gasolina);
  printf("-> Disel: %i\n", disel);
  return 0;
}