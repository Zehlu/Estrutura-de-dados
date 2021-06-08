typedef struct data data;

data* criador(int dia, int mes, int ano);
//Cria uma nova data 

char *converte(data* data, char *dataconv);
//Converte a data em uma string

int armazena(data* data, char *dataS);
//Armazena os dados da string na estrutura 

