#include <stdio.h>

typedef struct {
  int id;
  char nome[255];
  float nota;
} Aluno;

int main() {
  Aluno alunos[2];

  alunos[0] = (Aluno){1, "Thiago", 9.5};
  alunos[1] = (Aluno){2, "Vinicius", 9.0};

  for (int i = 0; i < 2; i++) {
    printf("Aluno: %d\n", i + 1);
    printf("ID: %d\n", alunos[i].id);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Nota: %.2f\n\n", alunos[i].nota);
  }

  return 0;
}