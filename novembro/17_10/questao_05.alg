algoritmo "questao_05"

var
   // Inicialize as variáveis para as 3 notas para a média final
   nota1, nota2, nota3, mediaFinal: real

inicio

      // Realize a leitura dos valores das 3 notas
      escreval("Digite o valor da primeira nota: ")
      leia(nota1)
      escreval("Digite o valor da segunda nota: ")
      leia(nota2)
      escreval("Digite o valor da terceira nota: ")
      leia(nota3)
      
      
      // Calcule a média ponderada onde os pesos são respectivamente
      // 2 para primeira nota, 3 para segunda nota e 5 para terceira nota
      // Média ponderada diz que as notas devem ser multiplicadas pelo seu peso
      // e após isto divididas por 10
      
      mediaFinal <- (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10
      // Seguindo predição matemática, a multiplicação é feita primeiro então
      // não a necessidade de por parenteses em cada uma delas.
      
      // Escreva na tela a média final formatada
      escreval("A sua média final é de", mediaFinal)


fimalgoritmo
