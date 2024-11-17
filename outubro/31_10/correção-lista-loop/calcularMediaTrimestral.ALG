Algoritmo "CalculaMediaTrimestral"
// Descrição   : Este programa calcula a média de duas notas.
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/10/2024

Var
   primeiraNota, segundaNota, media: real

Inicio

   primeiraNota <- -1
   segundaNota <- -1
   
   // Validação da primeira nota
   enquanto (primeiraNota < 0) ou (primeiraNota > 10) faca
      escreva("Digite a primeira nota (0 a 10): ")
      leia(primeiraNota)

      se (primeiraNota < 0) ou (primeiraNota > 10) entao
         escreva("Nota inválida.")
      fimse
   fimenquanto

   // Validação da segunda nota
   enquanto (segundaNota < 0) ou (segundaNota > 10) faca
      escreva("Digite a segunda nota (0 a 10): ")
      leia(segundaNota)

      se (segundaNota < 0) ou (segundaNota > 10) entao
         escreva("Nota inválida.")
      fimse
   fimenquanto

   // Cálculo da média
   media <- (primeiraNota + segundaNota) / 2

   // Exibição da média
   escreval("Média trimestral: ", media)

Fimalgoritmo
