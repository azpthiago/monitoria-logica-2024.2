algoritmo "questao_01"

var


   // Inicialize a vari�vel de valor e antecessor
   valor, antecessor: inteiro

inicio
      // Solicite o valor desejado ao usu�rio
      escreval("Digite o valor desejado")
      
      // Armazene o valor na vari�vel
      leia(valor)
      
      // Antacessor � nada mais que o valor anterior, ent�o apenas
      // subtraia 1;
      antecessor <- valor - 1
      
      // Escreva o valor na tela de maneira formatada
      escreval("O valor antecessor �: ", antecessor)

fimalgoritmo
