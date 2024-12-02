#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

// Função para calcular a média e classificar o aluno
void calcularMediaEStatus(float nota1[],
                          float nota2[],
                          float media[],
                          char status[][20],
                          int n) {
  for (int i = 0; i < n; i++) {
    media[i] = (nota1[i] + nota2[i]) / 2.0;
    if (media[i] >= 9.0) {
      strcpy(status[i], "Exemplar");
    } else if (media[i] >= 7.0) {
      strcpy(status[i], "Aprovado");
    } else {
      strcpy(status[i], "Reprovado");
    }
  }
}

// Função para ordenar os alunos por média (decrescente)
void ordenarPorMedia(char nomes[][MAX_NOME],
                     float nota1[],
                     float nota2[],
                     float media[],
                     char status[][20],
                     int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (media[j] < media[j + 1]) {
        // Troca média
        float tempMedia = media[j];
        media[j] = media[j + 1];
        media[j + 1] = tempMedia;

        // Troca notas
        float tempNota = nota1[j];
        nota1[j] = nota1[j + 1];
        nota1[j + 1] = tempNota;

        tempNota = nota2[j];
        nota2[j] = nota2[j + 1];
        nota2[j + 1] = tempNota;

        // Troca nomes
        char tempNome[MAX_NOME];
        strcpy(tempNome, nomes[j]);
        strcpy(nomes[j], nomes[j + 1]);
        strcpy(nomes[j + 1], tempNome);

        // Troca status
        char tempStatus[20];
        strcpy(tempStatus, status[j]);
        strcpy(status[j], status[j + 1]);
        strcpy(status[j + 1], tempStatus);
      }
    }
  }
}

// Função para exibir os resultados
void exibirResultados(char nomes[][MAX_NOME],
                      float nota1[],
                      float nota2[],
                      float media[],
                      char status[][20],
                      int n) {
  int aprovados = 0, reprovados = 0, exemplares = 0;

  printf("\nResultados:\n\n");
  for (int i = 0; i < n; i++) {
    printf("Aluno: %s\n", nomes[i]);
    printf("Notas: %.2f, %.2f\n", nota1[i], nota2[i]);
    printf("Média: %.2f\n", media[i]);
    printf("Status: %s\n\n", status[i]);

    if (strcmp(status[i], "Exemplar") == 0) {
      exemplares++;
    } else if (strcmp(status[i], "Aprovado") == 0) {
      aprovados++;
    } else {
      reprovados++;
    }
  }

  printf("Total de alunos aprovados: %d\n", aprovados);
  printf("Total de alunos reprovados: %d\n", reprovados);
  printf("Total de alunos exemplares: %d\n", exemplares);
}

int main() {
  int n;

  printf("Informe o número de alunos (1 a %d): ", MAX_ALUNOS);
  scanf("%d", &n);

  while (n < 1 || n > MAX_ALUNOS) {
    printf("Número inválido. Informe novamente (1 a %d): ", MAX_ALUNOS);
    scanf("%d", &n);
  }

  char nomes[MAX_ALUNOS][MAX_NOME];
  float nota1[MAX_ALUNOS], nota2[MAX_ALUNOS], media[MAX_ALUNOS];
  char status[MAX_ALUNOS][20];

  for (int i = 0; i < n; i++) {
    printf("\nCadastro do aluno %d:\n", i + 1);
    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", nomes[i]);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1[i]);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2[i]);
  }

  calcularMediaEStatus(nota1, nota2, media, status, n);
  ordenarPorMedia(nomes, nota1, nota2, media, status, n);
  exibirResultados(nomes, nota1, nota2, media, status, n);

  return 0;
}
