#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

struct data{
    int dia;
    int mes;
    int ano;
};

data* criador(int dia, int mes, int ano){
    data* d = (data*) malloc(sizeof(data));
    if (d != NULL){
        d->dia = dia;
        d->mes = mes;
        d->ano = ano; 
    }
    return d;
}



char *converte(data* data, char *dataconv){

    if(data == NULL){
        printf("Data inválida");
        return 0;
    }

    int diad = data->dia;
    int mesd = data->mes;
    int anod = data->ano;

    if ( ( anod % 4 == 0 && anod % 100 != 0 ) || anod % 400 == 0 ){
        if (0 < mesd && mesd < 13){
            if (mesd == 2){
                if (0 < diad && diad < 30){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }else 
            if (mesd % 2 == 1){
                if (0 < diad && diad < 32){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }else 
            if (mesd % 2 == 0){
                if (0 < diad && diad < 31){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }    
        }else{ 
        printf("data inválida");
        }
    }else{
        if (0 < mesd && mesd < 13){
            if (mesd == 2){
                if (0 < diad && diad < 29){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }else 
            if (mesd % 2 == 1){
                if (0 < diad && diad < 32){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }else 
            if (mesd % 2 == 0){
                if (0 <  diad && diad < 31){
                    sprintf(dataconv, "%d/%d/%d\n", diad, mesd, anod);
                    return dataconv;
                }else printf("data inválida\n");
            }    
        }else{ 
        printf("data inválida\n");
        }
    }
return 0;
}




int armazena(data* data, char *dataS){
    int x, dia, mes, ano;

    
    
    x = atoi(dataS);
    dia = (x &0xff); 
    mes = ((x>>8) &0xff); 
    ano = ((x>>16) &0xffff);

    data->dia = dia;
    data->mes = mes;
    data->ano = ano; 

    printf("Data armazenada na estrutura\n");
    
    return 0;
}
