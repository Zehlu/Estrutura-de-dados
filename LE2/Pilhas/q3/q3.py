from lliststack import Stack

# Nome do Arquivo a abrir
FILE_NAME = "no-errors.txt"

def main() :
    arquivo = open( FILE_NAME, "r" )
    if isValidSource(arquivo) :
       print("O arquivo tem casamento de { } [ ] ( ) ok!")
    else:   
       print("O arquivo tem um erro no casamento !!")
    arquivo.close() 

def isValidSource( srcfile ): 
    s = Stack()
    x = 0
    for line in srcfile  :
       x = x+1
       for token in line :
           if token in "{[(" :
              s.push( token )
           elif token in "}])" :
              if s.estaVazia():
                 # indica a linha do erro e o erro
                 print("Erro de ", token ," na linha ", x)
                 return False
              else :
                 left = s.pop()
                 if (token == "}" and left != "{") or \
                    (token == "]" and left != "[") or \
                    (token == ")" and left != "(") :
                     print("Erro de ", left ," na linha ", x)
                     return False
    return s.estaVazia()

# Executa a rotina principal
main()

