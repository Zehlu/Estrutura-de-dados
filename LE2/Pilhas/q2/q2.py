from lliststack import Stack


def main():
    frase = input("Digite a frase: ")
    palindromo(frase)


def palindromo(fraset):
    
    #Remove os caracteres especiais e letras maiusculas
    fraset = fraset.lower()
    fraset = fraset.replace(" ","") 
    fraset = fraset.replace(",","")
    fraset = fraset.replace("-","")
    fraset = fraset.replace(".","")
    
    x = len(fraset)
    fraseaux = []
    

    Pilha = Stack()
    
    #Adiciona a frase a pilha
    for i in range(0,x):
        Pilha.push(fraset[i])
    
    #Remove a frase invertida da pilha em uma string auxiliar
    for i in range(0,x):
        fraseaux.append(Pilha.pop())

    
    
    #Compara as strings e caso tenho algum caractere diferente é somado 1 ao contador
    c = 0
    for i in range(0,x): 
        if fraset[i] != fraseaux[i]: 
            c = c + 1 
    

    #Checa o contador de caracteres diferentes. Caso ele seja diferente de 0, a frase não é um palindromo
    if c == 0: 
        print("É palindromo")
    else: 
        print("Não é palindromo")


main()