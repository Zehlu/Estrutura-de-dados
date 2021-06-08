#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include "stacksADT.h"

int main(){
    int n,r;
    int* dataPtr;
    
    STACK* stack ;
    stack = createStack ();
    
    
    printf("Digite seu número decimal: ");
    scanf("%d",&n);

    dataPtr = (int*) malloc (sizeof(int));

    
    while (n > 0){
        r = n%16;
        dataPtr = &r; 
        pushStack(stack, dataPtr);
        n = n/16;
    }

    

    while (!emptyStack(stack)){

    dataPtr = (int*)popStack(stack);
    switch (*dataPtr){
    case 10: printf("A"); break;
    case 11: printf("B"); break;
    case 12: printf("C"); break;
    case 13: printf("D"); break;
    case 14: printf("E"); break;
    case 15: printf("F"); break;
    default: printf("%d", *dataPtr); break;
    }
    }
    printf("\n");
    

    destroyStack (stack);
    return 0;
}