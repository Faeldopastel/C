#include<stdio.h>
#include<string.h>

void desenho(int *a, int *b){

    printf("X");
    for(int i = 0; i< *a;i++){
        printf("---");
    };
    puts("X");
    
    for(int j = 0; j<*b; j++){
        printf("|");
        for(int k = 1; k<=(3 * *a); k++){
            printf(" ");
        };
        puts("|");
    };
    printf("X");
    for(int i = 0; i< *a;i++){
        printf("---");
    };
    puts("X");
};


int main(){
    int lado1, lado2;

    printf("Diga os lados da figura: lado 1 e lado 2: ");
    scanf("%d", &lado1);
    scanf("%d", &lado2);

    desenho(&lado1, &lado2);

    return 0;
}