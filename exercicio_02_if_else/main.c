#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,metade,dobro;
    scanf("%d", &idade);

    if(idade % 2 == 0){
        metade = idade /2;
        dobro = idade * 2;

        printf("A idade %d digitada e par \n", idade);
        printf("A metade de %d vale %d \n", idade, metade);
        printf("O dobro de %d vale %d \n", idade, dobro);

    }else{
        printf("A idade %d e impar \n" , idade);

    }
    return 0;
}
