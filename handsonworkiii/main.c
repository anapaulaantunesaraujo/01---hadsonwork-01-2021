#include <stdio.h>
#include <stdlib.h>

int main()
{

    //VARIAVEIS UTILIZADAS
    char opcao = ' ';

        //MOSTRA O MENUM PRINCIPAL
        printf("\n----------------------\n");
        printf("##BEM VINDO AO CONVERSOR DE BASES!##\n");
        printf("\nDigite a Opcao de conversao desejada\n");
        printf("\n1 - Binario para Decimal\n");
        printf("2 - Decimal para Binario\n");
        printf("3 - Decimal para Octal\n");
        printf("4 - Octal para Decimal\n");
        printf("0 - Sair\n");
        printf("\nResposta: ");
        scanf("%c", &opcao);
        getchar();

}
