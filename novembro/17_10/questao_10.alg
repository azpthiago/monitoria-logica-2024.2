algoritmo "questao_10"

var
   // Inicie as variáveis para total de cigarros p/dia e anos fumados de entrada
   cigarrosPorDia, anosFumados, totalCigarros: inteiro
   // E para calculos inicialize o totalEmMinutos e diasPerdiso
   totalEmMinutos, diasPerdidos: real
inicio

      // Solicite os valores de cigarros por dia e anos fumados ao usuário
      escreva("Quantos cigarros p/dia você fuma?: ")
      leia(cigarrosPorDia)
      
      escreva("A quantos anos você fuma?: ")
      leia(anosFumados)
      
      // Calcule o total de cigarros fumado pelo usuário
      totalCigarros <- cigarrosPorDia * (anosFumados * 365)
      
      // Cada cigarro é equivalente a 10min, então multiplique por 10
      totalEmMinutos <- totalCigarros * 10
      
      // Converta o total de minutos em dias dividindo por 1440 (24hr em minutos)
      diasPerdidos <- totalEmMinutos / 1440
      
      // Escreva na tela o total de dias perdidos de maneira formatada
      escreval("Você ja perdeu um total de ",diasPerdidos:4:2, " dias de sua vida.")
      
fimalgoritmo
