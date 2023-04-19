//Asuunto: Comandos em comum
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    int opt; //option

    printf("1, 2 ou 3 - Menu Principal\n");
    printf("4 - Help\n");
    printf("5 - Saida\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opt);

    switch(opt) {
        case 1:
        case 2:
        case 3:
            printf("Acesso ao menu principal\n");
            break;
        case 4:
            printf("Acesso ao help\n");
            break;
        case 5:
            printf("Saida\n");
    }

    system("PAUSE");
    return 0;
}

