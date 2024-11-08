algoritmo "semnome"
// Função :
// Autor :
// Data : 02/11/2024
// Seção de Declarações
var
quantidadeDentroDoIntervalo, quantidadeForaDoIntervalo, quantidadeDeValores, valor, iterador: inteiro
inicio

escreva("Escreva a quantidade de valores a serem testados: ")
leia(quantidadeDeValores)

para iterador de 1 ate quantidadeDeValores faca
   escreva("Digite o valor: ")
   leia(valor)

   se valor < 10 entao
      quantidadeForaDoIntervalo <- quantidadeForaDoIntervalo + 1
   senao
      se valor > 20 entao
         quantidadeForaDoIntervalo <- quantidadeForaDoIntervalo + 1
      senao
         quantidadeDentroDoIntervalo <- quantidadeDentroDoIntervalo + 1
      fimse
   fimse
   
fimpara

escreval("Dentro do intervalo -> ",quantidadeDentroDoIntervalo)
escreval("Fora do intervalo -> ",quantidadeForaDoIntervalo)

fimalgoritmo
