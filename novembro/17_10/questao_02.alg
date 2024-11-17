algoritmo "questao_02"

var

   // Inicialize a variável de idade de todal de dias
   idade: inteiro
   totalDias: real
   
inicio

      // Solicite o input do valor para o usuário
      escreval("Digite a sua idade: ")
      
      // Armazene o valor na variável de idade
      leia(idade)
      
      // O calculo do total de dias é feito multiplicando a idade por 365;
      totalDias <- idade*365
      
      // Escreva o valor da variável dias na tela de maneira formatada
      escreval("Você tem", totalDias, " anos de vida.")


fimalgoritmo
