#include<stdio.h>
#include<string.h>

typedef struct prod
{
    int cod_item;
    int quant;
    char descricao[30];
    float preco;
} PROD;


typedef struct cli{
    char nome[30];
    int cod;
    PROD produtos[10];
} CLIENTE;

int main(){

    CLIENTE cliente;
    char maior_compra[30];
    float soma_valor, prod_mais_caro;
    bool cadastro_fim;
    int i, linha, escolha;

    cadastro_fim = false;
    i = 0;
    prod_mais_caro = 0;
    soma_valor = 0;

    printf("digite seu nome: ");
    scanf("%s", cliente.nome);
    printf("\n Digite seu código: ");
    scanf("%d", &cliente.cod);
    
    while(cadastro_fim != true){

        i++;
        puts("Selecione a linha e o campo em que voce quer preencher; ");
        printf("\n selecione a linha (1 a 10):  ");
        scanf("%d", &linha);
        while (linha < 1 || linha > 10){
            printf("Linha inexistente. Digite novamente: ");
            scanf("%d", &linha);
        }

        linha-= 1;

        puts("Cadastrar produto?");
        puts(" 1 - sim");
        puts(" 2 - nao");
        scanf("%d", &escolha);

        while(escolha < 1 || escolha > 2){
            printf("Escolha fora do fornecido. Escolha novamente:\n");
            puts(" 1 - sim");
            puts(" 2 - nao");
            scanf("%d", &escolha);
        }
        if (escolha == 1){
            if (i == 1){
                puts("digite o codigo: ");
                scanf("%d", &cliente.produtos[linha].cod_item);
                puts("digite a quantidade: ");
                scanf("%d", &cliente.produtos[linha].quant);
                puts("digite a descricao do produto: ");
                gets(cliente.produtos[linha].descricao);
                puts("digite o valor: ");
                scanf("%f", &cliente.produtos[linha].preco);

                prod_mais_caro = cliente.produtos[linha].preco;
                strcpy(maior_compra, cliente.produtos[linha].descricao);
                
                soma_valor+= cliente.produtos[linha].preco;
            } 
            else {
                puts("digite o codigo: ");
                scanf("%d", &cliente.produtos[linha].cod_item);
                puts("digite a quantidade: ");
                scanf("%d", &cliente.produtos[linha].quant);
                puts("digite a descricao do produto: ");
                scanf("%s", cliente.produtos[linha].descricao);
                puts("digite o valor: ");
                scanf("%f", &cliente.produtos[linha].preco);

                soma_valor+= cliente.produtos[linha].preco;

                if (cliente.produtos[linha].preco > prod_mais_caro){
                    prod_mais_caro = cliente.produtos[linha].preco;
                    strcpy(maior_compra, cliente.produtos[linha].descricao);
                }
                
            }
        } 
        if (escolha == 2){
            cadastro_fim = true;
        }

        }
        printf("soma total de produtos %f\n", soma_valor);
        printf("%s e %f. Descricao e valor do produto mais caro", maior_compra, prod_mais_caro);

        return 0;

    }