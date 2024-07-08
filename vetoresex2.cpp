#include<stdio.h>

int s, dois_em_dois, izinho, soma, total; 

int main(){

dois_em_dois = 0;
soma = 0;
total = 0;
s = 0;

    for(int i = 0; i<=3; i++){

        s++;
        dois_em_dois+= 2;

        printf("Digite o valor de izinho:");
        scanf("%d", &izinho);

        while (izinho == 0){
            printf("digite um numero diferente de zero:\n");
            scanf("%d", &izinho);
        }

        soma = izinho + dois_em_dois;
        total+= soma;

        printf("%d", total);

    }
    printf("valor de S: %d\n e o valor de izinho e: %d ", s, total);

    return 0;
}