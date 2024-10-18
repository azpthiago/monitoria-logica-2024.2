algoritmo "questao_08"

var

   // Inicialize as variáveis para o valor do carro original e o valor do carro final
   // Alem das variáveis para imposto e percentual do distribuidor
   valorCarroFabrica, valorCarroFinal, valorImposto, percentualDistribuidor: real

inicio

      // Leia o valor do carro original
      escreval("Digite o valor de fábrica do carro: ")
      leia(valorCarroFabrica)
      
      
      // Porcentagem para os calculos
      // Distribuidor -> 28%
      // Impostos -> 45*

      // Realize o calculo dos impostos
      valorImposto <- valorCarroFabrica * 0.45
      percentualDistribuidor <- valorCarroFabrica * 0.28

      // Some todos os valores para saber o valor final do carro
      valorCarroFinal <- valorCarroFabrica + valorImposto + percentualDistribuidor
      
      
      // Escreva na tela o valor do carro com todos os ajustes
      escreval("O valor final do carro é de R$",valorCarroFinal:2:2)

fimalgoritmo

