algoritmo "questao_06"

var
   // Inicie as vari�veis para as principais unidades de comprimento
   kilometros, hectometro, decametro, metros, decimetro, centimetros, milimetros: real
inicio

      // Realize a entrada de dados na unidade de medida inicial
      // Neste exemplo irei utilizar metros mas pode utilizar a qual desejar
      // Isto so ir� impactar em como voc� vai realizar a multiplica��o na convers�o
      escreval("Digite o valor desejado (Em metros): ")
      leia(metros)
      
      // Realize o calculo da convers�o dividindo por 10 para cada unidade de medida maior
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
      escreval("Hect�metro -> ", hectometro, "hm")
      escreval("Dec�metro -> ", decametro, "dam")
      escreval("Dec�metro -> ", decimetro, "dm")
      escreval("Cent�metros -> ", centimetros, "cm")
      escreval("Mil�metros -> ", milimetros, "mm")
      

fimalgoritmo
