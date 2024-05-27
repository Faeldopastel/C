# include <stdio.h>

int box, laran_kg, excesso;
double venda;


int main(){

    box = 0;
    venda = 0;
    excesso = 0;


    printf("Quantos KG você coletou?");
    scanf("%d", & laran_kg);

    box = laran_kg / 20;
    printf("Você usaria %d caixas inteiras", box);

    excesso = laran_kg % 20;
    venda = excesso * 1.25;

    printf("Voce tem %d kg excedentes e conseguiu faturar %f", excesso, venda);

    return 0;
}
