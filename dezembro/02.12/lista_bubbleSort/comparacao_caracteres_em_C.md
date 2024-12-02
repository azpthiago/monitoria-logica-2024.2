# Tabelas ASCII
Tabela ASCII é um padrão norte americano para representar letras, algarismos e sinais de controles `%d` através de uma tabela numeral que utiliza Hexadecimal, Binário, Octal e decimal.

| Decimal | Hex  | Char | Descrição            | Decimal | Hex  | Char | Descrição            |
|---------|------|------|----------------------|---------|------|------|----------------------|
| 0       | 00   | NUL  | Null                | 32      | 20   | (espaço) | Espaço           |
| 1       | 01   | SOH  | Start of Header     | 33      | 21   | !    | Exclamação           |
| 2       | 02   | STX  | Start of Text       | 34      | 22   | "    | Aspas Duplas         |
| 3       | 03   | ETX  | End of Text         | 35      | 23   | #    | Cerquilha (#)        |
| 4       | 04   | EOT  | End of Transmission | 36      | 24   | $    | Cifrão ($)           |
| 5       | 05   | ENQ  | Enquiry             | 37      | 25   | %    | Porcentagem (%)      |
| 6       | 06   | ACK  | Acknowledge         | 38      | 26   | &    | E Comercial (&)      |
| 7       | 07   | BEL  | Bell                | 39      | 27   | '    | Aspas Simples        |
| 8       | 08   | BS   | Backspace           | 40      | 28   | (    | Parêntese Esquerdo   |
| 9       | 09   | TAB  | Tabulação Horizontal| 41      | 29   | )    | Parêntese Direito    |
| 10      | 0A   | LF   | Line Feed (Nova Linha)| 42    | 2A   | *    | Asterisco (*)        |
| 11      | 0B   | VT   | Tabulação Vertical  | 43      | 2B   | +    | Mais (+)             |
| 12      | 0C   | FF   | Form Feed           | 44      | 2C   | ,    | Vírgula              |
| 13      | 0D   | CR   | Carriage Return     | 45      | 2D   | -    | Menos (-)            |
| 14      | 0E   | SO   | Shift Out           | 46      | 2E   | .    | Ponto                |
| 15      | 0F   | SI   | Shift In            | 47      | 2F   | /    | Barra (/ ou slash)   |
| 16      | 10   | DLE  | Data Link Escape    | 48      | 30   | 0    | Zero                 |
| 17      | 11   | DC1  | Device Control 1    | 49      | 31   | 1    | Um                   |
| 18      | 12   | DC2  | Device Control 2    | 50      | 32   | 2    | Dois                 |
| 19      | 13   | DC3  | Device Control 3    | 51      | 33   | 3    | Três                 |
| 20      | 14   | DC4  | Device Control 4    | 52      | 34   | 4    | Quatro               |
| 21      | 15   | NAK  | Negative Acknowledge| 53      | 35   | 5    | Cinco                |
| 22      | 16   | SYN  | Synchronous Idle    | 54      | 36   | 6    | Seis                 |
| 23      | 17   | ETB  | End of Trans. Block | 55      | 37   | 7    | Sete                 |
| 24      | 18   | CAN  | Cancel              | 56      | 38   | 8    | Oito                 |
| 25      | 19   | EM   | End of Medium       | 57      | 39   | 9    | Nove                 |
| 26      | 1A   | SUB  | Substitute          | 58      | 3A   | :    | Dois-pontos          |
| 27      | 1B   | ESC  | Escape              | 59      | 3B   | ;    | Ponto e Vírgula      |
| 28      | 1C   | FS   | File Separator      | 60      | 3C   | <    | Menor Que (<)        |
| 29      | 1D   | GS   | Group Separator     | 61      | 3D   | =    | Igual (=)            |
| 30      | 1E   | RS   | Record Separator    | 62      | 3E   | >    | Maior Que (>)        |
| 31      | 1F   | US   | Unit Separator      | 63      | 3F   | ?    | Interrogação (?)     |


# Comparação

- Assim como dito em cima, em C, char é internamente tratado como um número inteiro (geralmente de 1 byte), assim a tabela ASCII define valores numéricos para cada caractere:

> `'a'` = `97`

> `'b'` = `98`

> `'A'` = `65`

> `'1'` = `49`

> `' '` (espaço) = `32`

- Quando usamos <, > ou outros operadores de comparação, o compilador compara os valores numéricos associados aos caracteres.

> Comparando `'a'` e `'b'`:

  1. Valor ASCII de `'a'` = 97.
  
  2. Valor ASCII de `'b'` = 98.
  
  3. Como 97 < 98, `'a'` < `'b'` avalia como verdadeiro.

> Comparando `'A'` e `'a'`:

  1. Valor ASCII de `'A'` = 65.
  
  2. Valor ASCII de `'a'` = 97.
  
  3. Como 65 < 97, `'A'` < `'a'` avalia como verdadeiro.

> Comparando `'1'` e `'A'`:

  1. Valor ASCII de `'1'` = 49.
  
  2. Valor ASCII de `'A'` = 65.
  
  3. Como 49 < 65, `'1'` < `'A'` avalia como verdadeiro.

# bubbleSort(), exibirVetor() e exibirMatriz()

```c
void bubbleSort(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[i];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}
```

```c
void exibirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d", vetor[i]);
  }
  print("\n")
}
```

```c
void exibirMatriz(int matriz[][3], int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    // Diz em qual linha esta na iteração da matriz
    printf("\nLinha %d\n", i + 1);
    for (int j = 0; j < colunas; j++)
      // Itera por cada valor da coluna
      printf("%d, ", matriz[i][j]);
  }
  printf("\n");
}
```
