#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header.h"

int main()
{
    int op, num, den;

    printf("Escolha a opcao que deseja:\n\n");
    printf("1 - Criar um numero racional\n");
    printf("2 - Somas dois numeros racionais\n");
    printf("3 - Multiplicar dois numeros racionais\n");

    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Digite o numerador: ");
            scanf("%d", &num);
            printf("Digite o denominador: ");
            scanf("%d", &den);
            criaRacional(num, den);
            break;
        case 2:
            somaRacionais();
            break;
        case 3:
            multiplicaRacionais();
            break;
    }

    return 0;
}
