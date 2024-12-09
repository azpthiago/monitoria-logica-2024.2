# Structs / Registros

Struct é um tipo de dado composto que permite agrupar diferentes variáveis dentro de um único local, assim podendo relacionar tipos de dados diferentes em um mesmo local.

-> Definição
```c
// Exemplo de definição de uma struct para aluno
struct Aluno {
  int id;
  char nome[255];
  float nota
}
```

## Acessando dados

Para acessarmos valores presentes em uma struct podemos utilizar `.` ou `->`

Sendo assim:

- `.` Acessando com variáveis normais;
- `->` Acessando com ponteiro para struct;

## Atribuindo valores

Atribui valor para uma struct é relativamente simples já que elas podem ser passado todos os dados de uma vez para ela.

Exemplo:

```c
struct Aluno aluno1 = {1, "Thiago", 10}
```

## Struct Aninhadas

Para termos um maior controle de dados nós podemos aninhas Structs, assim fazendo um relacionamento entre elas.

Exemplo:

```c
struct Endereco {
  char rua[50];
  int numero;
}

struct Pessoa {
  char nome[255]
  struct Endereco endereco;
}
```

## Simplificando com typedef
Utilizando `typedef`, podemos criar um nome curto para a struct:
```c
typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

// Agora não é mais preciso  usar "struct" ao declarar:
int main () {
  Aluno aluno1 = {1, "Maria", 9.5};
}
```

## Exemplos básicos de utilização de structs
> Exemplo 1
```c
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
``` 

> Exemplo com array de structs

```c
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
```

> Exemplo com ponteiros

```c
#include <stdio.h>

typedef struct {
  int id;
  char nome[50];
  float nota;
} Aluno;

void exibirAluno(Aluno *a) {
  printf("ID: %d\n", a->id);
  printf("Nome: %s\n", a->nome);
  printf("Nota: %.2f\n", a->nota);
}

int main() {
  Aluno aluno = {1, "Carlos", 8.9};
  exibirAluno(&aluno);
  return 0;
}
```

> Preenchendo array de structs com entrada do usuário

```c
#include <stdio.h>

struct Pessoa {
  char nome[50];
  int idade;
};

int main() {
  struct Pessoa pessoas[3];

  for (int i = 0; i < 3; i++) {
    printf("Informe o nome da pessoa %d: ", i + 1);
    scanf(" %[^\n]", pessoas[i].nome);  // Lendo string com espaço
    printf("Informe a idade da pessoa %d: ", i + 1);
    scanf("%d", &pessoas[i].idade);
  }

  printf("\n--- Lista de Pessoas ---\n");
  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d\n", i + 1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n\n", pessoas[i].idade);
  }

  return 0;
}

```
