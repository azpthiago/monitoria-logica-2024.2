#include <locale.h>
#include <stdio.h>
int main() {
  setlocale(LC_ALL, "Portuguese");

  // Uma revendedora de carros usados paga a seus funcion�rios vendedores um
  // sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido
  // e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que
  // leia o n�mero de carros por ele vendidos, o valor total de suas vendas, o
  // sal�rio fixo e o valor que ele recebe por carro vendido. Calcule e escreva
  // o sal�rio final do vendedor

  const float percentualVendas = 0.05;
  int quantidadeCarros;
  float valorTotalVendas, salarioFixo, comissaoPorCarro, totalComissaoFixa,
      totalComissaVendas, salarioFinal;

  printf("+ Digite a quantidade de carros vendida: ");
  scanf("%i", &quantidadeCarros);

  printf("+ Digite o valor total de suas vendas: ");
  scanf("%f", &valorTotalVendas);

  printf("+ Digite o seu sal�rio fixo: ");
  scanf("%f", &salarioFixo);

  printf("+ Comiss�o fixa p/carro: ");
  scanf("%fsd", &comissaoPorCarro);

  totalComissaoFixa = comissaoPorCarro * quantidadeCarros;

  totalComissaVendas = valorTotalVendas * percentualVendas;

  salarioFinal = salarioFixo + totalComissaoFixa + totalComissaVendas;

  printf("O seu sal�rio final � de R$%.2f", salarioFinal);

  return 0;
}