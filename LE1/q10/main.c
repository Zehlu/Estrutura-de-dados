#include <stdio.h>



int combinacao(int n,int k){
    int c;
    if (n<k) {
        printf("combinação impossível");
    }else if (k == 0 || n == k){
              return 1;
           } 
          else{
              c = combinacao(n-1,k) + combinacao(n-1,k-1);
              return c;
          }
}

int main (){
int n,k;
printf("Digite a combinação a se fazer:");
scanf("%d %d", &n,&k);

printf("%d\n",combinacao(n,k));
return 0;
}