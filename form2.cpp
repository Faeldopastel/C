#include<stdio.h>
#include<string.h>

typedef struct{
    int cod;
    char nome[30];
    int horas;
} info_curso;

typedef struct{
    int matricula;
    char nome[30];
    char area[30];
} info_professor;

typedef struct{
    int cod;
    char nome;
    info_professor professor;
    int horas;
    float notas[10];
} info_disciplina;

typedef struct{
    int matricula;
    char nome;
    info_curso curso;
} info_aluno;

typedef struct{
    int id;
    info_aluno aluno;
    info_disciplina disciplina[5];
} matricula;


int main(){


    matricula alunos[20];
    float media_aluno[20];
    float maior_med_ge, soma;

    maior_med_ge = 0;

    for(int i = 0; i <=19; i++){

        media_aluno[i] = 0;
        soma = 0;

        for(int k = 0; k<=4; k++){
            for(int j = 0; j<=9; j++){
                scanf("%f",&alunos[i].disciplina[k].notas[j]);
                soma+= alunos[i].disciplina[k].notas[j];
            }
        }
        soma/= 50;

        media_aluno[i] = soma;

        if(media_aluno[i] > maior_med_ge){
            maior_med_ge = media_aluno[i];
        }
    }

}

