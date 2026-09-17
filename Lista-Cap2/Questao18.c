#include <stdio.h>
#define PI 3.141593

int main() {
    float raio;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    printf("Area da superficie: %.6f\n", 4 * PI * raio * raio);
    printf("Volume da esfera:    %.6f\n", (4.0 / 3.0) * PI * raio * raio * raio); 
    
    return 0;
}