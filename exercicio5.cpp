#include <stdio.h>

double nota_p7,total_p7, nota_p3, total_p3, media;

int main(){

    total_p3 = 0;
    total_p7 = 0;
    media = 0;

    for(int i = 1; i<=3; i++){
        printf("digite as notas com peso 7 (Uma de cada vez): ");
        scanf("%lf", &nota_p7);
        total_p7+= nota_p7;
        total_p7*=7;
    }
     for(int k = 1; k<=2; k++){
            printf("Digite suas notas com peso 3 (Uma de cada vez): ");
            scanf("%lf",&nota_p3);
            total_p3+= nota_p3;
            total_p3*= 3;
        }

    media = (total_p3 + total_p7) / 27;

    printf("sua media e %lf", media);

    return 0;
}