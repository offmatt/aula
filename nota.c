
//Asuunto: Nota
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    int nota;

    printf("Qual a nota do aluno: ");
    scanf("%d", &nota);

    switch(nota) {
        case 7:
            printf("Aprovado! Bolsa de 10%%\n");
            break;
        case 8:
            printf("Aprovado! Bolsa de 20%%\n");
            break;
        case 9:
            printf("Aprovado! Bolsa de 30%%\n");
            break;
        case 10  :
            printf("Aprovado! Bolsa de 40%%\n");
            break;
        default:
            printf("Reprovado\n");
    }

    system("PAUSE");
    return 0;
}

