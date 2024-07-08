#include<stdio.h>
#include<stdbool.h>

bool intervalo(int a[], int b[], int tamanho){
    int cont;

    for(int i = 0; i<= tamanho; i++){
        if(a[i] == b[i]){
            cont++;
        }
        else{
            return false;
        };
    }
    if(cont == 3){
        return true;
    };
}

int main(){
    int conjA[3], conjB[3];

    for(int i = 0; i<=2; i++){
        printf("Digite os valores inteiros do conjunto A: (3 digitos)");
        scanf("%d", &conjA[i]);
    }

    for(int i = 0; i<=2; i++){
        printf("Digite os valores inteiros do conjunto B: (3 digitos)");
        scanf("%d", &conjB[i]);
    };

    if (intervalo(conjA, conjB, 2))
    {
        printf("A e um subconjunto de B");
    }
    else{
        printf("nao e um subconjunto de B");
    }
    


}