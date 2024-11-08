algoritmo "semnome"

var
quantidade, numero, i: inteiro
inicio

escreva("Digite a quantidade de números a serem inseridos: ")
leia(quantidade)


para i de 1 ate quantidade faca

   escreva("Digite o", i, " valor: ")
   leia(numero)

   // Valida se o número é par ou impar
   se numero % 2 = 0 entao
      escreval("-> O número é par")
   senao
      escreval("-> O número é impar")
   fimse

   // Valida se o número é positivo ou négativo
   se numero < 0 entao
      escreval("-> O número é negativo")
   senao
      se numero > 0 entao
         escreval("-> O número é positivo")
      fimse
   fimse

   // Valida se o número é zero
   se numero = 0 entao
      escreval("-> O número é nulo")
   fimse

fimpara

fimalgoritmo
