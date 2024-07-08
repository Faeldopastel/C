#include<stdio.h>

int funcao(float *x){
    float n;

    n = (*x * *x) - 3* (*x) + 5;

    return(n);
}

int main(){

    float x, fun;
    fun = 0;

    printf("numero: ");
    scanf("%f", &x);

    fun = funcao(&x);

    printf("%f", fun);

    return 0;

}