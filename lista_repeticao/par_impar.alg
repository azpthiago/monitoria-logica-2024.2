algoritmo "semnome"

var
quantidade, numero, i: inteiro
inicio

escreva("Digite a quantidade de n�meros a serem inseridos: ")
leia(quantidade)


para i de 1 ate quantidade faca

   escreva("Digite o", i, " valor: ")
   leia(numero)

   // Valida se o n�mero � par ou impar
   se numero % 2 = 0 entao
      escreval("-> O n�mero � par")
   senao
      escreval("-> O n�mero � impar")
   fimse

   // Valida se o n�mero � positivo ou n�gativo
   se numero < 0 entao
      escreval("-> O n�mero � negativo")
   senao
      se numero > 0 entao
         escreval("-> O n�mero � positivo")
      fimse
   fimse

   // Valida se o n�mero � zero
   se numero = 0 entao
      escreval("-> O n�mero � nulo")
   fimse

fimpara

fimalgoritmo
