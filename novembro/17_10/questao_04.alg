algoritmo "questao_04"

var

   // Inicialize as variaveis para o sal�rio atual, o novo sal�rio
   // e o percentual de reajuste
   
   salarioMensalAtual, percentualReajuste, salarioMensalAtualizado: real

inicio

      // Solicite o input do salarioMensalAtual para o usu�rio
      escreval("Digite o seu sal�rio atual: ")

      // Leia o valor do sal�rio mensal
      leia(salarioMensalAtual)
      
      // Solicite o percentual de reajuste do salario
      escreval("Digite o percentual de reajuste do sal�rio: ")
      leia(percentualReajuste)
      
      // Realize o calculo do novo sal�rio
      // Calculo detalhado em passos:
      // 1 -> Multiplica o valor do reajuste por 100 para achar a porcentagem
      // 2 -> Acha o valor do reajuste em cima do sal�rio atual multiplicando
      // 3 -> Soma o valor atual com o valor do reajuste

      salarioMensalAtualizado <-  salarioMensalAtual + (salarioMensalAtual * (percentualReajuste / 100))


      // Escreva na tela o sal�rio atual formatado
      escreval("O valor do novo sal�rio � de:", salarioMensalAtualizado)
fimalgoritmo
