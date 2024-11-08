#include <stdio.h>
#include <locale.h> 
int main () {
  setlocale(LC_ALL, "Portuguese"); 
  
  // Escreva um algoritmo que realize a conversão completa das medidas de comprimento..

  float kilometro, hectometro, decametro, metros, decimetro, centimetro, milimetro;

  printf("+ Digite a medida em metros: ");
  scanf("%f", &metros);

  kilometro = metros / 1000;
  hectometro = metros / 100;
  decametro = metros / 10;
  decimetro = metros * 10;
  centimetro = metros * 100;
  milimetro = metros * 1000;


  printf("-> Kilometros: %.2fkm\n", kilometro);
  printf("-> Hectometro: %.2fhm\n", hectometro);
  printf("-> Decametro: %.2fdam\n", decametro);
  printf("-> Metros: %.2fm\n", metros);
  printf("-> Decimetro: %.2fm\n", decimetro);
  printf("-> Centrimetros: %.2fm\n", centimetro);
  printf("-> Milimetros: %.2fm\n", milimetro);

  return 0;
}