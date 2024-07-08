#include<stdio.h>

int n, fat;

int fatorial(int a){
    
    int p;
    p = 1;
    for(int k = 1; k<=a; k++){
        p*= k;
    }

    return(p);
}

int main(){
    fat = 0;
    printf("numero: ");
    scanf("%d", &n);
    while( n < 1){
        printf("numero não pode ser negativo. Digite novamente: ");
        scanf("%d", &n);
    }

    fat = fatorial(n);
    printf("%d", fat);
    scanf("%d", &n);

    return 0;
}