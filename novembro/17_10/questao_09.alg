algoritmo "questao_09"

var

   // Inicialize as vari�veis para solicitada na quest�o
   // n�mero de carros, valor total das vendas, sal�rio fixo e comiss�o fixa por carro
   // Alem de inicializar as vari�veis para realizar os calculos
   qtdCarrosVendidos: inteiro
   valorTotalVendas, salarioFixo, comissaoFixa, totalComissaoFixa, totalComissaoVendas, salarioFinal: real
   
inicio

      // Leia os valores das vari�veis uma a uma
      escreval("Digite a quantidade de carros vendidos: ")
      leia(qtdCarrosVendidos)
      
      escreval("Digite o valor total dos carros vendidos: ")
      leia(valorTotalVendas)
      
      escreval("Digite o seu sal�rio fixo: ")
      leia(salarioFixo)
      
      escreval("Digite o valor fixo da comiss�o p/carro vendido")
      leia(comissaoFixa)
      
      // Realize o c�lculo do total da comiss�o fixa
      totalComissaoFixa <- comissaoFixa * qtdCarrosVendidos
      
      // Realize o c�lculo da valor da comiss�o de %
      totalComissaoVendas <- valorTotalVendas * 0.05
      
      // Realize a soma dos v�lores para encontrar o sal�rio final
      salarioFinal <- salarioFixo + totalComissaoFixa + totalComissaoVendas
      

      // Escreva o valor final do sal�rio de maneira formatada
      escreval("Salario Final: R$",salarioFinal:5:2)
      
      

fimalgoritmo
