#include<stdio.h>


void tria(int tamanho){
    int cont;

    for(int i = 0; i <= tamanho; i++){
        cont++;
        for(int i = 1; i < cont; i++){
            printf("%d", cont-1);
        }
        printf("\n");
    }
}

int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    tria(num);

    return 0;
}