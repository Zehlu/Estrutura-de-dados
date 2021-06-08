typedef struct Cilindro Cilindro;

Cilindro* inicializacao(float altura, float raio);
//Cria novo cilindro 

float altura(Cilindro* cilindro);
//Retorna a altura

float raio(Cilindro* cilindro);
//retorna o raio

float volume(Cilindro* cilindro);
//retorna o volume 

float area(Cilindro* cilindro);
//retorna a área