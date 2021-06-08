#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"	


// Função catQueue que contatena as filas 1 e 2 na fila 1
//  Podendo preservar a segunda fila caso desejado 
// Passando o parametro 'True' para preservar e 'False' para não preservar
void catQueue(QUEUE* fila1, QUEUE* fila2, bool preservar){
    int* dataPtr;
    int x; 

    x = queueCount(fila2);
    for (int i = 0; i < x; i++){
        dequeue(fila2,(void*)&dataPtr);
        enqueue(fila1,dataPtr);
        
        if(preservar){
            enqueue(fila2, dataPtr);
        }
    }    
} 
