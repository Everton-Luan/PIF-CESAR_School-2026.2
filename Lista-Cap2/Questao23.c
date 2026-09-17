#include <stdio.h>

int main() {
    int h, m, s, duracao_segundos;

    printf("--- HORARIO DE INICIO ---\n");
    printf("Digite as horas (0-23): ");
    scanf("%d", &h);
    printf("Digite os minutos (0-59): ");
    scanf("%d", &m);
    printf("Digite os segundos (0-59): ");
    scanf("%d", &s);

    printf("\nDigite a duracao total da experiencia em segundos: ");
    scanf("%d", &duracao_segundos);

    int total_segundos = (h * 3600) + (m * 60) + s + duracao_segundos;

    int hora_fim = (total_segundos / 3600) % 24;
    int min_fim = (total_segundos % 3600) / 60;
    int seg_fim = total_segundos % 60;

    printf("\nHorario exato de termino do experimento: %02d:%02d:%02d\n", hora_fim, min_fim, seg_fim);

    return 0;
}