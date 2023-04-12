//assunto: exercicio 4
//autor: Maria Herminia Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    printf("Universidade Federal do Tocantins\nDisciplina: L%cgica de Programa%c%co\nAluno: Maria Herminia Oquendo\n\n", 162, 135, 198 );

    printf("Preencha com as seguintes informa&c&ces sobre a dengue em Palmas: \n\n", 135, 228);

    int suspeitos, confirmados, mortes, total;

    printf("\tCasos Suspeitos: ");
    scanf("%d", &suspeitos);
    printf("\tCasos Confirmados: ");
    scanf("%d", &confirmados);
    printf("\tQuantidade de Mortes: ");
    scanf("%d", &mortes);

    printf("\n\nInforma%c%ces sobre a dengue em Palmas: \n\n", 135, 228);
    printf("\tCasos Suspeitos: %d\n", suspeitos);
    printf("\tCasos Confirmados: %d\n", confirmados);
    printf("\tQuantidade de Mortes: %d\n", mortes);

    total = suspeitos + confirmados + mortes;

    printf("\nTotal de dados: %d\n\n", total);

    system("PAUSE");
    return 0;
}
