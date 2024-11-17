algoritmo "questao_07"
var

   // Incialize as variáveis para fahrenheit e celcius
   fahrenheit, celcius: real

inicio

      // Leia o valor desejado do usuário em fahrenheit
      escreval("Digite o valor em Fahrenheit para conversão: ")
      leia(fahrenheit)
      
      // Realize o calculo da conversão seguindo a formula
      // Formula: 5/9 * ( temperaturaOriginal - 32)
      celcius <- 5/9 * (fahrenheit - 32)
      
      // Escreva o valor da temperatura em tela de maneira formatada
      escreval("Temperatura em celcius: ", celcius:5:2, "ºC")

fimalgoritmo
