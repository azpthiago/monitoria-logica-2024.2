algoritmo "questao_03"
var
   // Inicialize as variáveis dos tipos de votos e do total
  total_eleitores, votos_brancos, votos_nulos, votos_validos: inteiro
  // Inicialize as variáveis de percentual
  percentual_brancos, percentual_nulos, percentual_validos: real
inicio
  escreval("Total de votos validos: ")
  leia(votos_validos)
  escreval("Total de votos nulos: ")
  leia(votos_nulos)
  escreval("Total de votos brancos: ")
  leia(votos_brancos)

  // Atribui o valor de votos através da somatoria de todos os valores;
  total_eleitores <- votos_validos + votos_nulos + votos_brancos


  // O calculo é realizado multiplicando o valor do tipo de voto p/100;
  // e apos isto realizando a divisão total de votos
  percentual_brancos <- (votos_brancos * 100) / total_eleitores
  percentual_nulos <- (votos_nulos * 100) / total_eleitores
  percentual_validos <- (votos_validos * 100) / total_eleitores
  
  
  // Escreve os valores dos calculos na tela
  // Para ajustar as casas decimais utilizamos o :2:2
  // o primeiro :2 diz que irá ter 2 valores antes da virgula
  // e o segundo :2 diz que irá ter 2 valores após a virgula
  escreval("Votos brancos -> ", percentual_brancos:2:2, "%")
  escreval("Votos nulos -> ", percentual_nulos:2:2, "%")
  escreval("Votos validos -> ", percentual_validos:2:2, "%")
fimalgoritmo
