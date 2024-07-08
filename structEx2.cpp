#include<stdio.h>
#include<string.h>

typedef struct{
    int num;
    char descricao[30];
    int concluida;

} descritivo_de_acoes;

typedef struct {
    int id;
    char supervisor[30];
    int prioridade;
    descritivo_de_acoes acoes[5];

}tarefas_necessarias;

typedef struct{
    int codigo;
    char supervisor[30];
    char data_limite[30];
   tarefas_necessarias tarefas[10];

}strategy;

int main(){
    strategy estrategias[20];
    int cont_pri_max, acoes_con, cont;
    int n; 

    printf("Qual a estrategia que voce quer ver?: ");
    

    cont = 0;
    cont_pri_max = 0;

    for(int e = 0; e<=19; e++){


        for(int i = 0; i<=9; i++){
            scanf("%d", &estrategias[e].tarefas[i].prioridade);

             for(int k = 0; k<=4; k++){
                scanf("%d",estrategias[e].tarefas[i].acoes[k].concluida);

                    if(estrategias[e].tarefas[i].acoes[k].concluida == 1){
                        cont++;
                        printf("%s", estrategias[e].tarefas[i].acoes[k].descricao);    
                    };
                };
                if(cont == 5){
                    cont_pri_max++;
                }
            }
         if(cont_pri_max == 10){
            printf("%s", estrategias[e].supervisor);
            }
        }
    }