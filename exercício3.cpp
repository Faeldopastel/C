# include <stdio.h>

double altura;

int main(){

    printf("Digite sua altura");
    scanf("%lf", &altura);

    altura = (72.7*altura) - 58;
    printf("Seu peso ideal é: %2.1lf", altura);

    return 0;
}