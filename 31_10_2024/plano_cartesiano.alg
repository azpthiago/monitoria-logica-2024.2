algoritmo "plano_cartesiano"

var

   x1, x2, y1, y2, result: real

inicio

   escreva("Digite o X1: ")
   leia(x1)
   
   escreva("Digite o X2: ")
   leia(x2)
   
   escreva("Digite o Y1: ")
   leia(y1)

   escreva("Digite o Y2: ")
   leia(y2)


   result <- raizq((x2 - x1)^2 + (y2 - y1) ^ 2)
   
   escreva(result)


fimalgoritmo
