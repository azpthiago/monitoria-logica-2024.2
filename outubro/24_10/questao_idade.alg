algoritmo "questao_idade"

var
   idade: inteiro
inicio

   escreval("Digite a sua idade: ")
   leia(idade)

   // Testa se o valor � menor que 0, se for a idade � invalida
   // Ninguem tem menos 0 anos
   se (idade < 0) entao
      escreval("Idade invalida")
   fimse

   // Testa se o valor est� entre 0 e 12, se for a pessoa � uma crian�a
   se (idade > 0) e (idade < 12) entao
      escreval("Faixa et�ria: Crian�a")
   fimse

   // Testa se o valor est� entre 12 e 17, se for a pessoa � um adolescente
   se (idade >= 12) e (idade < 18) entao
      escreval("Faixa et�ria: Adolescente")
   fimse

   // Testa se o valor est� entre 18 e 63, se for a pessoa � um adulto
   se (idade >= 18) e (idade < 64) entao
      escreval("Faixa et�rio: Adulto")
   fimse

   // Testa se o valor � maior ou igual que 64, se for a pessoa � um idoso
   se (idade >= 64) e (idade < 120) entao
      escreval("Faixa et�rio: Idoso")
   fimse
   
   se (idade >= 120) entao
      escreval("Provavelmente ja foi pro caix�o")
   fimse

fimalgoritmo
