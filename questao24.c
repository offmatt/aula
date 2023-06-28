//Assunto: Questão 20
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

    media = nota1*0.4 + nota2*0.3 + nota3*0.3;

    printf("\nNotas\n");
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("m%cdia: %.2f\n", 130, media);

    if(media >= 5) {
        printf("Aprovado!\n\n");
    } else {
        printf("Reprovado.\n\n");
    }

    system("PAUSE");
    return 0;
}
