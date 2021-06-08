#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "queue.h"	


int main(){
    char palavra[46];
    char letra;
    
    QUEUE* A = createQueue();
    QUEUE* B = createQueue();
    QUEUE* C = createQueue();
    QUEUE* D = createQueue();
    QUEUE* E = createQueue();
    QUEUE* F = createQueue();
    QUEUE* G = createQueue();
    QUEUE* H = createQueue();
    QUEUE* I = createQueue();
    QUEUE* J = createQueue();
    QUEUE* K = createQueue();
    QUEUE* L = createQueue();
    QUEUE* M = createQueue();
    QUEUE* N = createQueue();
    QUEUE* O = createQueue();
    QUEUE* P = createQueue();
    QUEUE* Q = createQueue();
    QUEUE* R = createQueue();
    QUEUE* S = createQueue();
    QUEUE* T = createQueue();
    QUEUE* U = createQueue();
    QUEUE* V = createQueue();
    QUEUE* X = createQueue();
    QUEUE* W = createQueue();
    QUEUE* Y = createQueue();
    QUEUE* Z = createQueue();

    FILE * file;
    file = fopen( "texto.txt" , "r");

        while (fscanf(file, "%s", palavra)!=EOF){
            letra = tolower(palavra[0]);
            
            switch (letra) {
            case 'a': enqueue(A,&palavra); break;
            case 'b': enqueue(B,&palavra); break;
            case 'c': enqueue(C,&palavra); break;
            case 'd': enqueue(D,&palavra); break;
            case 'e': enqueue(E,&palavra); break;
            case 'f': enqueue(F,&palavra); break;
            case 'g': enqueue(G,&palavra); break;
            case 'h': enqueue(H,&palavra); break;
            case 'i': enqueue(I,&palavra); break;
            case 'j': enqueue(J,&palavra); break;
            case 'k': enqueue(K,&palavra); break;
            case 'l': enqueue(L,&palavra); break;
            case 'm': enqueue(M,&palavra); break;
            case 'n': enqueue(N,&palavra); break;
            case 'o': enqueue(O,&palavra); break;
            case 'p': enqueue(P,&palavra); break;
            case 'q': enqueue(Q,&palavra); break;
            case 'r': enqueue(R,&palavra); break;
            case 's': enqueue(S,&palavra); break;
            case 't': enqueue(T,&palavra); break;
            case 'u': enqueue(U,&palavra); break;
            case 'v': enqueue(V,&palavra); break;
            case 'w': enqueue(W,&palavra); break;
            case 'x': enqueue(X,&palavra); break;
            case 'y': enqueue(Y,&palavra); break;
            case 'z': enqueue(Z,&palavra); break;
            }
        };
        fclose(file);


        printf("Número de palavras que começam com A: %d\n", queueCount(A));
        printf("Número de palavras que começam com B: %d\n", queueCount(B));
        printf("Número de palavras que começam com C: %d\n", queueCount(C));
        printf("Número de palavras que começam com D: %d\n", queueCount(D));
        printf("Número de palavras que começam com E: %d\n", queueCount(E));
        printf("Número de palavras que começam com F: %d\n", queueCount(F));
        printf("Número de palavras que começam com G: %d\n", queueCount(G));
        printf("Número de palavras que começam com H: %d\n", queueCount(H));
        printf("Número de palavras que começam com I: %d\n", queueCount(I));
        printf("Número de palavras que começam com J: %d\n", queueCount(J));
        printf("Número de palavras que começam com K: %d\n", queueCount(K));
        printf("Número de palavras que começam com L: %d\n", queueCount(L));
        printf("Número de palavras que começam com M: %d\n", queueCount(M));
        printf("Número de palavras que começam com N: %d\n", queueCount(N));
        printf("Número de palavras que começam com O: %d\n", queueCount(O));
        printf("Número de palavras que começam com P: %d\n", queueCount(P));
        printf("Número de palavras que começam com Q: %d\n", queueCount(Q));
        printf("Número de palavras que começam com R: %d\n", queueCount(R));
        printf("Número de palavras que começam com S: %d\n", queueCount(S));
        printf("Número de palavras que começam com T: %d\n", queueCount(T));
        printf("Número de palavras que começam com U: %d\n", queueCount(U));
        printf("Número de palavras que começam com V: %d\n", queueCount(V));
        printf("Número de palavras que começam com W: %d\n", queueCount(W));
        printf("Número de palavras que começam com X: %d\n", queueCount(X));
        printf("Número de palavras que começam com Y: %d\n", queueCount(Y));
        printf("Número de palavras que começam com Z: %d\n", queueCount(Z));
    
  return 0;
};