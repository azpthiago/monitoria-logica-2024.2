algoritmo "questao_03"
var
   // Inicialize as vari�veis dos tipos de votos e do total
  total_eleitores, votos_brancos, votos_nulos, votos_validos: inteiro
  // Inicialize as vari�veis de percentual
  percentual_brancos, percentual_nulos, percentual_validos: real
inicio
  escreval("Total de votos validos: ")
  leia(votos_validos)
  escreval("Total de votos nulos: ")
  leia(votos_nulos)
  escreval("Total de votos brancos: ")
  leia(votos_brancos)

  // Atribui o valor de votos atrav�s da somatoria de todos os valores;
  total_eleitores <- votos_validos + votos_nulos + votos_brancos


  // O calculo � realizado multiplicando o valor do tipo de voto p/100;
  // e apos isto realizando a divis�o total de votos
  percentual_brancos <- (votos_brancos * 100) / total_eleitores
  percentual_nulos <- (votos_nulos * 100) / total_eleitores
  percentual_validos <- (votos_validos * 100) / total_eleitores
  
  
  // Escreve os valores dos calculos na tela
  // Para ajustar as casas decimais utilizamos o :2:2
  // o primeiro :2 diz que ir� ter 2 valores antes da virgula
  // e o segundo :2 diz que ir� ter 2 valores ap�s a virgula
  escreval("Votos brancos -> ", percentual_brancos:2:2, "%")
  escreval("Votos nulos -> ", percentual_nulos:2:2, "%")
  escreval("Votos validos -> ", percentual_validos:2:2, "%")
fimalgoritmo
