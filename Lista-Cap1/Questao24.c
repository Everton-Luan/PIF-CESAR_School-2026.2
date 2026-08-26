#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct{
    char nome[150];
    float nota;
}aluno;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    aluno turma[4] = {
        {"ALINE", 9},
        {"MÁRIO", 10},
        {"SÉRGIO", 4.5},
        {"SHIRLEY", 7}
    };

    printf(" ALUNO(A) NOTA \n");
    printf("========    =====\n");
    for (int i = 0; i < 4; i++){
        if (i == 1 || i == 2){
            printf("%-9s%4.1f\n", turma[i].nome, turma[i].nota);
        }else{
            printf("%-8s%4.1f\n", turma[i].nome, turma[i].nota);
        }
    }
    
    return 0;
}