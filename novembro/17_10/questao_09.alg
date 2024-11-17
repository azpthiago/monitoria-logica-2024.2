algoritmo "questao_09"

var

   // Inicialize as variáveis para solicitada na questão
   // número de carros, valor total das vendas, salário fixo e comissão fixa por carro
   // Alem de inicializar as variáveis para realizar os calculos
   qtdCarrosVendidos: inteiro
   valorTotalVendas, salarioFixo, comissaoFixa, totalComissaoFixa, totalComissaoVendas, salarioFinal: real
   
inicio

      // Leia os valores das variáveis uma a uma
      escreval("Digite a quantidade de carros vendidos: ")
      leia(qtdCarrosVendidos)
      
      escreval("Digite o valor total dos carros vendidos: ")
      leia(valorTotalVendas)
      
      escreval("Digite o seu salário fixo: ")
      leia(salarioFixo)
      
      escreval("Digite o valor fixo da comissão p/carro vendido")
      leia(comissaoFixa)
      
      // Realize o cálculo do total da comissão fixa
      totalComissaoFixa <- comissaoFixa * qtdCarrosVendidos
      
      // Realize o cálculo da valor da comissão de %
      totalComissaoVendas <- valorTotalVendas * 0.05
      
      // Realize a soma dos válores para encontrar o salário final
      salarioFinal <- salarioFixo + totalComissaoFixa + totalComissaoVendas
      

      // Escreva o valor final do salário de maneira formatada
      escreval("Salario Final: R$",salarioFinal:5:2)
      
      

fimalgoritmo
