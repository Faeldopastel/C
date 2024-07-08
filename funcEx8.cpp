#include<stdio.h>

void uaua(int a){

    if((a % 2) == 0){
        printf("o antecessor par mais proximo e %d e impar mais proximo e %d",(a - 2), (a + 1) );
    }
    if((a%3) == 0){
        printf("o antecessor par mais proximo e %d e o sucessor impar mais proximo e %d ", (a - 1), (a+2));
    }
}

int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    uaua(num);

    return 0;

}