Algoritmo "mediaDeIdades"
Var
   idade, idadeTotal, acumulador,media: real
Inicio


   enquanto (idade >=0 ) faca
      escreva("Digite uma idade: ")

      leia(idade)

      se (idade > 0) entao
         idadeTotal <- idadeTotal + idade
         acumulador <- acumulador + 1
      fimse

   fimenquanto
   
   media <- idadeTotal / acumulador
   escreva("A média de idade é: ", media:5:2)


Fimalgoritmo