#include<stdio.h>


void imp_romano(int num){

    if(num < 0){
        printf("\nN");
    }
    else if (num > 0)
    {
        printf("\nP");
    }
    else{
        printf("\nX");
    }
    
}

int main(){
    int num;

    puts("Escreva um número: ");
    scanf("%d", &num);

    imp_romano(num);

    main();
}