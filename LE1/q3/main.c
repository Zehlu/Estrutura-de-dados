#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

int main(){
    int d, m, a;
    char datac[10];

    printf("Digite uma data: DD/MM/AAAA \n");
    scanf("%d/%d/%d", &d, &m, &a);

    data* data1 = criador(d,m,a);
    //A
    sprintf(datac,"%s",converte(data1,datac));
    printf("\n%s\n",datac);
    //B
    armazena(data1, datac);
    
    

    return 0;
}