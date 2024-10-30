algoritmo "questao_idade"

var
   idade: inteiro
inicio

   escreval("Digite a sua idade: ")
   leia(idade)

   // Testa se o valor é menor que 0, se for a idade é invalida
   // Ninguem tem menos 0 anos
   se (idade < 0) entao
      escreval("Idade invalida")
   fimse

   // Testa se o valor está entre 0 e 12, se for a pessoa é uma criança
   se (idade > 0) e (idade < 12) entao
      escreval("Faixa etária: Criança")
   fimse

   // Testa se o valor está entre 12 e 17, se for a pessoa é um adolescente
   se (idade >= 12) e (idade < 18) entao
      escreval("Faixa etária: Adolescente")
   fimse

   // Testa se o valor está entre 18 e 63, se for a pessoa é um adulto
   se (idade >= 18) e (idade < 64) entao
      escreval("Faixa etário: Adulto")
   fimse

   // Testa se o valor é maior ou igual que 64, se for a pessoa é um idoso
   se (idade >= 64) e (idade < 120) entao
      escreval("Faixa etário: Idoso")
   fimse
   
   se (idade >= 120) entao
      escreval("Provavelmente ja foi pro caixão")
   fimse

fimalgoritmo
