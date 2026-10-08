#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float nota, soma = 0, maior = -1.0, menor = 11.0;
    int total_alunos = 0;
    
    printf("--- Estatísticas da Turma ---\n");
    printf("Nota: Introduza as notas (digite -1.0 para encerrar).\n\n");
    
    while (1) {
        printf("Introduza a nota do aluno: ");
        scanf("%f", &nota);
        
        if (nota == -1.0) {
            break; // Sentinela de parada
        }
        
        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            total_alunos++;
            
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        } else {
            printf("Nota inválida! Introduza um valor entre 0.0 e 10.0.\n\n");
        }
    }
    
    if (total_alunos > 0) {
        printf("\n--- Resultados ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) A maior nota da turma: %.2f\n", maior);
        printf("c) A menor nota da turma: %.2f\n", menor);
        printf("d) A média geral da turma: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhuma nota válida foi introduzida.\n");
    }
    
    return 0;
}