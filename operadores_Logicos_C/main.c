#include <stdio.h>
#include <stdlib.h>

int main()
{
   float valor_viajante,total, valor_a_mais;

   printf("====TAXA ALFANDEGARIA==== \n");
   printf("Digite o valor gasto em suas compras: U$-> \n");

   scanf("%f", &valor_viajante);

   if(valor_viajante > 500){
        valor_a_mais = valor_viajante - 500;
        total = valor_a_mais * 1.50;
        printf("O valor gasto foi-> %f. O valor excedido foi-> %f. A taxa a pagar e de-> %f", valor_viajante, valor_a_mais, total);


   }else{
       printf("O valor de %f nao excedeu o limite alfandegario", valor_viajante);

   }



    return 0;
}
