//Asuunto: Concessionaria
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    char conc;

    printf("Digite a inical da concessionaria: ");
    scanf(" %c", &conc);

    switch(conc) {
        case 'F':
            printf("FIAT\n");
            break;
        case 'V':
            printf("VOLKS\n");
            break;
        case 'R':
            printf("RENAULT\n");
            break;
        case 'H':
            printf("HYUNDAI\n");
            break;
        default:
            printf("Concessionaria nao encontrada\n");
    }

    system("PAUSE");
    return 0;
}

