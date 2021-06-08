#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"	


bool veriOp(int op){
    if(op == '+' || op == '-' || op == '/' || op == '*')
        return true;
    else
        return false;
};

void main(){
    QUEUE* filaop = createQueue();
    int operacao[] = {'-','+','*',9,'+',2,8,'*','+',4,8,6,3};
    int *dataPtr;
    int x,op1,op2, op3;
    

	// preenche a fila
	x = sizeof(operacao)/sizeof(int);
    for(int i = 0; i != x; i++){
            dataPtr = malloc(sizeof(int));
            dataPtr = &operacao[i];
            enqueue(filaop,dataPtr);
    };

	op1 = op2 = op3 = 0;

   
    // Percorre a fila realizando as devidas operações 	
    while ((queueCount(filaop) > 0) || veriOp(op1) || veriOp(op2) || veriOp(op3)){
        if(veriOp(op1) && !veriOp(op2) && !veriOp(op3)){   
			dataPtr = malloc(sizeof(int));
			switch (op1){
            case '+': *dataPtr = op2 + op3; break;
            case '-': *dataPtr = op2 - op3; break;
            case '/': *dataPtr = op2 / op3; break;
            case '*': *dataPtr = op2 * op3; break;
            };
            enqueue(filaop,dataPtr);
            op1 = op2 = op3 = 0;

        }
        else 
            if (op1 == op2 && op2 == op3 && op3 == 0)
            {
                dequeue(filaop,(void*)&dataPtr); 
                op1 = *dataPtr;
                dequeue(filaop,(void*)&dataPtr); 
                op2 = *dataPtr;
                dequeue(filaop,(void*)&dataPtr); 
                op3 = *dataPtr;
            }
            else
            {
                *dataPtr = op1;
                enqueue(filaop,dataPtr);
                op1 = op2;
                op2 = op3;
                dequeue(filaop,(void*)&dataPtr); 
                op3 = *dataPtr;
            }     
    }

    dequeue(filaop,(void*)&dataPtr); 
    printf("O resultado da operação é: %d \n",(*dataPtr));
};