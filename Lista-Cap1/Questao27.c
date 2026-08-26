#include <stdio.h>
#include <string.h>

void FormataTempo(int Segundos){
    int NumHoras = Segundos/3600, NumMinutos = (Segundos%3600)/60, NumSegundos = Segundos%60;
    char horas[] = "horas", minutos[] = "minutos", segundos[] = "segundos";

    if (NumHoras == 1){
        strcpy(horas, "hora");
    }
    if (NumMinutos == 1){
        strcpy(minutos, "minuto");
    }
    if (NumSegundos == 1){
        strcpy(segundos, "segundo");
    }
    if (Segundos == 1){
        printf("%d segundo equivale a: %d %s, %d %s, %d %s", Segundos, NumHoras, horas, NumMinutos, minutos, NumSegundos, segundos);
    }else{
        printf("%d segundos equivalem a: %d %s, %d %s, %d %s", Segundos, NumHoras, horas, NumMinutos, minutos, NumSegundos, segundos);
    }
}

int main(){
    int segundos;
    
    printf("Digite um valor de segundos: ");
    scanf("%d", &segundos);

    FormataTempo(segundos);

    return 0;
}