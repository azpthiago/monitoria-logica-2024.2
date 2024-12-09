#include <stdio.h>
#include <string.h>

struct Aluno {
  int id;
  char nome[255];
  float nota;
};

int main() {
  struct Aluno aluno1;

  aluno1.id = 1;
  strcpy(aluno1.nome, "Vinicius");
  aluno1.nota = 8.5;

  printf("-> ID: %d\n", aluno1.id);
  printf("-> Nome: %s\n", aluno1.nome);
  printf("-> Nota: %.2f\n", aluno1.nota);

  return 0;
}