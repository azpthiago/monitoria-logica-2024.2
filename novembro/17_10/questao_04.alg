algoritmo "questao_04"

var

   // Inicialize as variaveis para o salário atual, o novo salário
   // e o percentual de reajuste
   
   salarioMensalAtual, percentualReajuste, salarioMensalAtualizado: real

inicio

      // Solicite o input do salarioMensalAtual para o usuário
      escreval("Digite o seu salário atual: ")

      // Leia o valor do salário mensal
      leia(salarioMensalAtual)
      
      // Solicite o percentual de reajuste do salario
      escreval("Digite o percentual de reajuste do salário: ")
      leia(percentualReajuste)
      
      // Realize o calculo do novo salário
      // Calculo detalhado em passos:
      // 1 -> Multiplica o valor do reajuste por 100 para achar a porcentagem
      // 2 -> Acha o valor do reajuste em cima do salário atual multiplicando
      // 3 -> Soma o valor atual com o valor do reajuste

      salarioMensalAtualizado <-  salarioMensalAtual + (salarioMensalAtual * (percentualReajuste / 100))


      // Escreva na tela o salário atual formatado
      escreval("O valor do novo salário é de:", salarioMensalAtualizado)
fimalgoritmo
