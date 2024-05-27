# include <stdio.h>

int n1, n2, n3;

int main(){

    printf("Digite um numero");
    scanf("%d", &n1);
    printf("Digite outro numero");
    scanf("%d", &n2);

    n2 = n1 + n2;
    printf("A soma dos dois valores e %d", n2);

    n1 = n1 * 3;
    printf("\nO triplo do primeiro numero e %d", n1);
    

    return 0;
}
