#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Verificador de idade para transporte publico \n");
    scanf("%d", &idade);

    if(idade >= 60){
        printf("A passagem é gratuira");
    }
    else{
        printf("Pagante");
    }
    return 0;
}
