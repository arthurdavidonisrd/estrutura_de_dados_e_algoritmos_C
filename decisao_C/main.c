#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if(idade % 2 == 0 ){
        printf("Sua idade e par");

    }else{
        printf("Sua idade e impar");
    }

    return 0;
}
