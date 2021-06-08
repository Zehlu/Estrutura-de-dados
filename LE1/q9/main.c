#include <stdio.h>
#include <math.h>

float squareRoot(float num,float ans,float tol){
    float x;

    if (fabs(ans * ans - num) <= tol){
        return ans; 
    }else 
    x = squareRoot(num,(ans * ans + num)/(2 * ans), tol);
    return x;

}

int main(){
    float num,ans,tol;

    printf("Digite o num, a ans e a tol respectivamente:\n");
    scanf("%f %f %f", &num, &ans, &tol);

    printf("A raiz é: %f\n",squareRoot(num,ans,tol));

    printf("A resultado de squareRoot(5, 2, 0.01) é: %f\n",squareRoot(5, 2, 0.01));
    printf("A resultado de squareRoot(4, 2, 0.01) é: %f\n",squareRoot(4, 2, 0.01));
 
    return 0;
}