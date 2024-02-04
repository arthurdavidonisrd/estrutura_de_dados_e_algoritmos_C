#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocidade_permitida, velocidade_motorista, percentual;

    int pontos = 0;
    float multa = 0;
    velocidade_permitida = 60;
    scanf("%f", &velocidade_motorista);
    percentual = velocidade_motorista /velocidade_permitida;


    if(percentual > 1){

        if(percentual <= 1.20){
            multa = 85,13;
            pontos = 4;
            printf("O valor da sua multa é de R$: %f e %d pontos na carteira", multa, pontos);

        }
        else if(percentual <= 1.50){
            multa = 127.69;
            pontos = 5;
            printf("O valor da sua multa e de: R$: %f e %d pontos na carteira", multa, pontos);

        }
        else{
            multa = 574.62;
            pontos = 7;
            printf("O valor da sua multa e de R$: %f e %d pontos na carteira", multa, pontos);

        }

    }else{
        printf("Nenhuma infracao foi cometida pelo motorista nesta via \n");
    }



    return 0;
}
