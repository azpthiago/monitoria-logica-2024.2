algoritmo "senhaFixa"

var
   senha, senhaReal: caractere
inicio


   senhaReal <- "isto…UmaSenha"

   enquanto (senha <> "isto…UmaSenha") faca
      escreva("Digite a senha: ")
      leia(senha)
      
      se senha <> senhaReal entao
           escreval("Senha invalida! Tente novamente.")
      senao
         se senha = senhaReal entao
              escreval("Acesso permitido")
         fimse
      fimse
   fimenquanto
fimalgoritmo
