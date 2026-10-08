#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("--- Tabela de Conversão de Temperaturas ---\n");
    printf("Celsius\tFahrenheit\tKelvin\n");
    printf("------------------------------------------\n");
    
    for (int c = 0; c <= 100; c += 5) {
        float f = (9.0 * c) / 5.0 + 32.0;
        float k = c + 273.15;
        // %d para Celsius, %.2f para alinhar com duas casas decimais
        printf("%d\t%.2f\t\t%.2f\n", c, f, k);
    }
    
    return 0;
}