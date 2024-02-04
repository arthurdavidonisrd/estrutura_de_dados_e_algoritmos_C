#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos;
    int valor_segundos;


    printf("Digite um valor em minutos para saber quantos segundos possui: \n");
    scanf("%d", &minutos);
    valor_segundos = minutos * 60;
    printf("O valor em segundos de %d minutos vale %d segundos",minutos, valor_segundos);


    return 0;
}
