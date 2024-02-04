#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2;
    float adicao, subtracao, multiplicacao, divisao;
    printf("Calculadora das quatro operacoes \n");
    scanf("%f%f", &numero1, &numero2);

    adicao = (numero1 + numero2);
    subtracao = (numero1 - numero2);
    multiplicacao = (numero1 * numero2);
    divisao = (numero1 / numero2);

    printf("Adicao: %f \n" , adicao);
    printf("Subtracao: %f \n", subtracao);
    printf("Multiplicao: %f \n", multiplicacao);
    printf("Divisao: %f \n", divisao);




    return 0;
}
