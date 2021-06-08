#include <stdlib.h>
#include <stdio.h>
#include "cilindro.h"

int main(void){
    
    Cilindro* cilindro = inicializacao(10, 2);
    printf("Cilindro inicializado com Altura 10 e raio 2\n");

    float h = altura(cilindro);
    printf("Altura do cilindro: %.2f\n", h);

    float r = raio(cilindro);
    printf("Raio do cilindro: %.2f\n", r);

    float v = volume(cilindro);
    printf("Volume do cilindro: %.2f\n", v);

    float a = area(cilindro);
    printf("Área do cilindro: %.2f\n", a);


    return 0;
}