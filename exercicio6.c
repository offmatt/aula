//assunto: exercicio 6
//autor: Maria Herminia Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    printf("Universidade Federal do Tocantins\nDisciplina: L%cgica de Programa%c%co\nAluno: Maria Herminia Oquendo\n\n", 162, 135, 198 );

    int tabuada;

    printf("Digite um n%cmero inteiro: ", 163);
    scanf("%d", &tabuada);

    printf("\nTabuada do %d:\n\n", tabuada);

    for(int i = 1; i <= 10; i++) {
        printf("\t%d x %d = %d\n", tabuada, i, tabuada * i);
    }
    printf("\n");


    system("PAUSE");
    return 0;
}
