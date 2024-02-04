#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Informe os valores da sua NOTA 1, NOTA 2 e NOTA 3 abaixo: \n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media = (nota1 +nota2+ nota3) /3;

    printf("A soma de %f + %f + %f equivale a %f", nota1, nota2,nota3,media);
    return 0;
}
