#include <stdlib.h>
#include <stdio.h>
#include "cilindro.h"

struct Cilindro{
    float altura;
    float raio;
};

Cilindro* inicializacao(float altura, float raio){
    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if (c != NULL){
        c->altura = altura;
        c->raio = raio;
    }
    return c;
}


float altura(Cilindro* cilindro){
    if (cilindro != NULL){
        return cilindro->altura;
    }
    else{
        printf("Cilindro inválido");
        return 0;
    }
}

float raio(Cilindro* cilindro){
    if (cilindro != NULL){
        return cilindro->raio;
    }
    else{
        printf("Cilindro inválido");
        return 0;
    }
}

float volume(Cilindro* cilindro){
    if(cilindro == NULL){
        printf("Cilindro inválido");
        return 0;
    }
    float alturaC = cilindro->altura;
    float raioC = cilindro->raio;

    float volume = (3.14 * raioC*raioC *alturaC);

    return volume;
}

float area(Cilindro* cilindro){
    if(cilindro == NULL){
        printf("Cilindro inválido");
        return 0;
    }
    float alturaC = cilindro->altura;
    float raioC = cilindro->raio;

    float area = (2 * 3.14 * raioC * (raioC + alturaC));
}
