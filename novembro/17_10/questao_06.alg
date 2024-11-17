algoritmo "questao_06"

var
   // Inicie as variáveis para as principais unidades de comprimento
   kilometros, hectometro, decametro, metros, decimetro, centimetros, milimetros: real
inicio

      // Realize a entrada de dados na unidade de medida inicial
      // Neste exemplo irei utilizar metros mas pode utilizar a qual desejar
      // Isto so irá impactar em como você vai realizar a multiplicação na conversão
      escreval("Digite o valor desejado (Em metros): ")
      leia(metros)
      
      // Realize o calculo da conversão dividindo por 10 para cada unidade de medida maior
      // Ou multiplicando por 10 para cada unidade de medida menor
      kilometros <- metros / 1000
      hectometro <- metros / 100
      decametro <- metros / 10
      decimetro <- metros * 10
      centimetros <- metros * 100
      milimetros <- metros * 1000
      
      // Escreva na tela o valor de cada unidade medida formatado
      escreval("Valor original -> ", metros,"m")
      escreval("Kilometro -> ", kilometros, "Km")
      escreval("Hectómetro -> ", hectometro, "hm")
      escreval("Decâmetro -> ", decametro, "dam")
      escreval("Decímetro -> ", decimetro, "dm")
      escreval("Centímetros -> ", centimetros, "cm")
      escreval("Milímetros -> ", milimetros, "mm")
      

fimalgoritmo
