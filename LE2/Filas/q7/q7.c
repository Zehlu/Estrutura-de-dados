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


        printf("N??mero de palavras que come??am com A: %d\n", queueCount(A));
        printf("N??mero de palavras que come??am com B: %d\n", queueCount(B));
        printf("N??mero de palavras que come??am com C: %d\n", queueCount(C));
        printf("N??mero de palavras que come??am com D: %d\n", queueCount(D));
        printf("N??mero de palavras que come??am com E: %d\n", queueCount(E));
        printf("N??mero de palavras que come??am com F: %d\n", queueCount(F));
        printf("N??mero de palavras que come??am com G: %d\n", queueCount(G));
        printf("N??mero de palavras que come??am com H: %d\n", queueCount(H));
        printf("N??mero de palavras que come??am com I: %d\n", queueCount(I));
        printf("N??mero de palavras que come??am com J: %d\n", queueCount(J));
        printf("N??mero de palavras que come??am com K: %d\n", queueCount(K));
        printf("N??mero de palavras que come??am com L: %d\n", queueCount(L));
        printf("N??mero de palavras que come??am com M: %d\n", queueCount(M));
        printf("N??mero de palavras que come??am com N: %d\n", queueCount(N));
        printf("N??mero de palavras que come??am com O: %d\n", queueCount(O));
        printf("N??mero de palavras que come??am com P: %d\n", queueCount(P));
        printf("N??mero de palavras que come??am com Q: %d\n", queueCount(Q));
        printf("N??mero de palavras que come??am com R: %d\n", queueCount(R));
        printf("N??mero de palavras que come??am com S: %d\n", queueCount(S));
        printf("N??mero de palavras que come??am com T: %d\n", queueCount(T));
        printf("N??mero de palavras que come??am com U: %d\n", queueCount(U));
        printf("N??mero de palavras que come??am com V: %d\n", queueCount(V));
        printf("N??mero de palavras que come??am com W: %d\n", queueCount(W));
        printf("N??mero de palavras que come??am com X: %d\n", queueCount(X));
        printf("N??mero de palavras que come??am com Y: %d\n", queueCount(Y));
        printf("N??mero de palavras que come??am com Z: %d\n", queueCount(Z));
    
  return 0;
};