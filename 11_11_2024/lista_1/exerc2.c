#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  // Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e m�s com 30 dias.
    int anos, meses, dias, idadeEmDias;

    // Leitura da idade em anos, meses e dias
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Conver��o para dias
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    // Exibe a idade em dias
    printf("A idade expressa em dias �: %d\n", idadeEmDias);

    return 0;
}