#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;
    printf("Calculadora da área de um Triangulo \n");
    scanf("%f%f", &base, &altura);

    area = (base * altura) /2;
    printf("A area da base %f e da altura %f vale: %f /n", base, altura ,area);




    return 0;
}
