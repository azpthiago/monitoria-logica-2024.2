algoritmo "questao_05"

var
   // Inicialize as vari�veis para as 3 notas para a m�dia final
   nota1, nota2, nota3, mediaFinal: real

inicio

      // Realize a leitura dos valores das 3 notas
      escreval("Digite o valor da primeira nota: ")
      leia(nota1)
      escreval("Digite o valor da segunda nota: ")
      leia(nota2)
      escreval("Digite o valor da terceira nota: ")
      leia(nota3)
      
      
      // Calcule a m�dia ponderada onde os pesos s�o respectivamente
      // 2 para primeira nota, 3 para segunda nota e 5 para terceira nota
      // M�dia ponderada diz que as notas devem ser multiplicadas pelo seu peso
      // e ap�s isto divididas por 10
      
      mediaFinal <- (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10
      // Seguindo predi��o matem�tica, a multiplica��o � feita primeiro ent�o
      // n�o a necessidade de por parenteses em cada uma delas.
      
      // Escreva na tela a m�dia final formatada
      escreval("A sua m�dia final � de", mediaFinal)


fimalgoritmo
