#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis usadas
    char opc = ' ';

        //Mostra o menu principal
        printf("\n----------------------\n");
        printf("Digite a Opcao\n");
        printf("1 - Binario para Decimal\n");
        printf("2 - Binario para Octal\n");
        printf("3 - Decimal para Binario\n");
        printf("4 - Decimal para Octal\n");
        printf("5 - Decimal para Hexa\n");
        printf("6 - Octal para Decimal\n");
        printf("7 - Hexa para Decimal\n");
        printf("0 - Sair\n");
        printf("Resposta: ");
        scanf("%c", &opc);
        getchar();
    }
