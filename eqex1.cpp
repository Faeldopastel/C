#include<stdio.h>
#include<math.h>
#include<string.h>




int main(){

    char nome_ponto[30], ponto_ordenada[30], abcissa_esq[30];
    double ponto_x_y[2], anterior[2], formula;
    int pri_qua, seg_qua, ter_qua, qua_qua, total_lidos;
    double mais_esq, mais_alt;
    bool dist_maior_q_cin;

    pri_qua = seg_qua = ter_qua = qua_qua = total_lidos = 0;
    dist_maior_q_cin = false;

    while(dist_maior_q_cin != true){

        printf("\nDe um nome para suas coordenadas: ");
        scanf("%29s", nome_ponto);

        printf("\nDigite duas coordenadas. X e Y: "); /*entrada de dados*/
        scanf("%lf %lf", &ponto_x_y[1], &ponto_x_y[2]);

        total_lidos++;

        if(ponto_x_y[1] > 0 && ponto_x_y[2] > 0 ){
            pri_qua++;
        };
        
        if(ponto_x_y[1] > 0 && ponto_x_y[2] < 0 ){
            qua_qua++;
        };

        if(ponto_x_y[1] < 0 && ponto_x_y[2] > 0 ){
            seg_qua++;
        } 
        else{
            ter_qua++;
        };

        if(total_lidos == 1){ /* If de primeiro para ter como dar sequencia*/
           for(int i = 0; i<=1; i++){
            anterior[i] = ponto_x_y[i];
           }

          strcpy(ponto_ordenada, nome_ponto); /*atribuindo o nome da ordenada mais altq*/

          if(ponto_x_y[1] <= 0){
            strcpy(abcissa_esq, nome_ponto); /*atribuindo o nome da abcissa mais a esquerda*/
            mais_esq = ponto_x_y[1];
          } else {
            mais_esq = 0;
          }
    
          mais_alt = ponto_x_y[2];

        }
        else{
             if(ponto_x_y[1] > 0 && ponto_x_y[2] > 0 ){  /*verificação de quadrante*/
            pri_qua++;
            };
        
             if(ponto_x_y[1] > 0 && ponto_x_y[2] < 0 ){
            qua_qua++;
            };

             if(ponto_x_y[1] < 0 && ponto_x_y[2] > 0 ){
                seg_qua++;
            } 
            else{
            ter_qua++;
            };

            if(ponto_x_y[1] < mais_esq){ /*Vericação de abcissa mais a esquerda*/
                strcpy(abcissa_esq, nome_ponto);

            };
            if(ponto_x_y[2] > mais_alt){ /*Verificação da ordenada mais alta*/
                strcpy(ponto_ordenada, nome_ponto);
            };

            formula = sqrt(pow(ponto_x_y[1] - anterior[1], 2) + pow(ponto_x_y[0] - anterior[0], 2));

            if (formula == 5){ /* Flag para interrupção do while*/
                dist_maior_q_cin = 1;
            };
                   
        };
        
    };

return 0;
}