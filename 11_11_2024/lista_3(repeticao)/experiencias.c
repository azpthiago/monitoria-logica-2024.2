#include <stdio.h>
#include <stdlib.h>  // Inclui a stdlib para utilziar o comando system.

int main() {
  int N, quantidade, total = 0, coelhos = 0, ratos = 0, sapos = 0;
  char tipo;

  // Lendo o número de casos de teste
  printf("Digite o número de casos de teste: ");
  scanf("%d", &N);

  // Processando cada caso de teste
  for (int i = 0; i < N; i++) {
    printf("+ Digite a quantidade de cobaias: ");
    scanf("%d", &quantidade);

    // fflush(stdin) é utilizada para limpar o buffer do teclado e não da
    // problema ao ler um inteiro e um caractere um após o outro
    fflush(stdin);

    printf("+ Digite o tipo (C, R, S): ");
    scanf("%c", &tipo);

    // Atualizando o total e o tipo de cobaia
    total += quantidade;
    if (tipo == 'C' || tipo == 'c') {
      coelhos += quantidade;
    } else if (tipo == 'R' || tipo == 'r') {
      ratos += quantidade;
    } else if (tipo == 'S' || tipo == 's') {
      sapos += quantidade;
    }
  }

  // system() executa um comando para o terminal do sistema
  // o CLS é a função para limpar o terminal.
  system("cls");

  // Calculando os percentuais
  double percentualCoelhos = (coelhos * 100.0) / total;
  double percentualRatos = (ratos * 100.0) / total;
  double percentualSapos = (sapos * 100.0) / total;

  // Exibindo os resultados
  printf("-> Relatório final <-\n");
  printf("-> Total: %d cobaias\n", total);
  printf("-> Total de coelhos: %d\n", coelhos);
  printf("-> Total de ratos: %d\n", ratos);
  printf("-> Total de sapos: %d\n", sapos);

  printf("-> Percentual de coelhos: %.2lf %%\n", percentualCoelhos);
  printf("-> Percentual de ratos: %.2lf %%\n", percentualRatos);
  printf("-> Percentual de sapos: %.2lf %%\n", percentualSapos);

  return 0;
}
