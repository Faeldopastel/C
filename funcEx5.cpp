#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[30];
    float vendas;
}vend;

float media(float a, float b){

    a = (a*100) / b;
    return(a);
};

void melhor_vend(char *nome, char *melhor_vendedor, float *venda, float *maior_venda){

    if(*venda > *maior_venda){
        *nome = *melhor_vendedor;
        *maior_venda = *venda;
    }
}

int main(){
    vend vendedor[10];
    float soma[10], total_geral, melhor_venda;
    int choose;
    char melhor_vendedor[30];


    total_geral = 0;


    for(int i = 0; i<=9; i++){

        soma[i] = 0;

        printf("Digite seu nome: ");
        scanf("%s", vendedor[i].nome);
        printf("Qual foi o valor da venda?: ");
        scanf("%f", &vendedor[i].vendas);
        soma[i]+= vendedor[i].vendas;
        printf("Foi efetuada mais alguma venda? 1- sim; 2- nao");
        scanf("%d", &choose);

        while(choose != 2){
            puts("Insira outro valor: ");
            scanf("%f", &vendedor[i].vendas);
            soma[i]+= vendedor[i].vendas;
            puts("Outra venda? 1- sim; 2- nao");
            scanf("%d", &choose);
        };

        total_geral+= soma[i];

        if(i == 0){
            strcpy(melhor_vendedor, vendedor[i].nome);
            melhor_venda = soma[i];
        }
        else{
            melhor_vend(vendedor[i].nome, melhor_vendedor, &soma[i], &melhor_venda);
        };

    };

    printf("melhor vendedor %s", melhor_vendedor);
    printf("melhor venda %f", melhor_venda);
        
    for(int k = 0; k<=9; k++){
        total_geral = media(soma[k], total_geral);

        printf("a media do vendedor %s é %2.f% ",vendedor[k].nome, total_geral);
    };

    return 0;
}


