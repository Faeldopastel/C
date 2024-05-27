#include <stdio.h>
#include <string.h>

float n1, media;
double faltas;



int main(){
    media = 0;

    printf("qual o seu nome? ");
   


    for(int i = 1; i <=4;i++){
        printf("Digite sua nota");
        scanf("%f", &n1);

        media+= n1;
    }

    printf("Quantas faltas você tem?");
    scanf("%lf", & faltas);

    faltas = (faltas/72) * 100.0;
    media = media / 4;

    printf("Então ... , você está com uma media de %f e uma frequencia de %lf porcento ", media, faltas);

    return 0;


}