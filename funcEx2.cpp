#include<stdio.h>

int a,b, s;

int calcula(int *r1, int *r2){
    int aux1, aux2, aux3, aux4;

    aux1 = *r1;
    aux2 = *r2;
    aux3 = *r1 * *r2;
    aux4 = *r1 - *r2;
    *r1 = aux3;
    *r2 = aux4;

    return(aux1 + aux2);
}

int main(){
    s = 0;
    printf("escreva dois numeros: ");
    scanf("%d %d", &a, &b);

    s = calcula(&a,&b);
    printf("soma = %d", s);
    printf("\nproduto = %d", a);
    printf("\ndiferenca = %d", b);

    return 0;

}