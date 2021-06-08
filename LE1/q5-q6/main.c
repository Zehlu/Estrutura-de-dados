#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j, x, s = 0, m = 0, somaprod = 0;
    float **m1, **m2, **rs, **rm; 
    clock_t temposoma, tempomult;

    printf("Digite a ordem das matrizes quadradas: ");
    scanf("%d", &x);

    // Alocação dinâmica da Matrizes
    m1 = (float **) malloc(x * sizeof(float *));
    m2 = (float **) malloc(x * sizeof(float *));
    rs = (float **) malloc(x * sizeof(float *));
    rm = (float **) malloc(x * sizeof(float *));
    for (i = 0; i < x; i++) {
        m1[i] = (float *) malloc(x * sizeof(float));
        m2[i] = (float *) malloc(x * sizeof(float));
        rs[i] = (float *) malloc(x * sizeof(float));
        rm[i] = (float *) malloc(x * sizeof(float));
        for(j = 0 ; j < x; j++){
            m1[i][j] = rand () % 100;   
            m2[i][j] = rand () % 100;
        }
    }


    // QUESTÃO 5

    // Soma de Matrizes
    temposoma = clock();
    for(i = 0; i < x; i++) {
        for(j = 0 ; j < x; j++){
            rs[i][j] = m1[i][j] + m2[i][j];
            s++;
        }
    }
    temposoma = clock() - temposoma; 

    // Multiplicação de Matrizes
    tempomult = clock();
    for(i = 0; i < x; i++) {
        for(j = 0 ; j < x; j++){
            for(int k = 0 ; k < x; k++){
                somaprod += m1[i][k] * m2[k][j];
                m++;
            }
            rm[i][j] = somaprod;
            somaprod = 0;
        }
    }
    tempomult = clock() - tempomult;
    

    // QUESTÃO 5
    printf("\nO resultado da soma de matrizes é:");
     for(i = 0; i < x; i++) {
         printf("\n");
        for(j = 0 ; j < x; j++){
            printf("%f  ", rs[i][j]);
        }
    }

    printf("\n");
    printf("\nO resultado da multiplicação de matrizes é:");
     for(i = 0; i < x; i++) {
         printf("\n");
        for(j = 0 ; j < x; j++){
            printf("%f  ", rm[i][j]);
        }
    }


    // QUESTÃO 6
    printf("\n");
    printf("\nO tempo de execução da soma foi %f milissegundos\n",((float)temposoma)/CLOCKS_PER_SEC);
    printf("E o número de operações foi %d\n",s);
    printf("O tempo de execução da multiplicação foi %f milissegundos\n",((float)tempomult)/CLOCKS_PER_SEC);
    printf("E o número de operações foi %d\n",m);
    return 0;
}