#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa, altura, imc;
    printf("Calcular seu IMC: \n");
    printf("Digite sua massa(peso)\n");
    scanf("%f", &massa);
    printf("Digite sua altura:");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("O IMC esta em: %f", imc);

    return 0;
}
