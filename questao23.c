//Assunto: Questão 23
//Aluno Maria Herminia da Silva Rodriguez Oquendo
//Data: 03/05/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("\nSua m%cdia foi %.2f\n", 130, media);

    if(media >= 6) {
        printf("Aprovado!\n\n");
    } else {
        printf("Reprovado.\n\n");
    }

    system("PAUSE");
    return 0;
}
