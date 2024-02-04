#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if(idade < 16){
        printf("Nao eleitor");
    }
    else if(idade >= 18 || idade <= 65){
        printf("eleitor obrigatorio");
    }
    else{
        prinft("Eleitor facultativo");
    }



    return 0;
}
