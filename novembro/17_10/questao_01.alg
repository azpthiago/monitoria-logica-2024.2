algoritmo "questao_01"

var


   // Inicialize a variável de valor e antecessor
   valor, antecessor: inteiro

inicio
      // Solicite o valor desejado ao usuário
      escreval("Digite o valor desejado")
      
      // Armazene o valor na variável
      leia(valor)
      
      // Antacessor é nada mais que o valor anterior, então apenas
      // subtraia 1;
      antecessor <- valor - 1
      
      // Escreva o valor na tela de maneira formatada
      escreval("O valor antecessor é: ", antecessor)

fimalgoritmo
