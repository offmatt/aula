//Assunto: Questão 22
//Aluno Maria Herminia da Silva Rodriguez Oquendo
//Data: 03/05/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    int sala, capacidade, alunos_matriculados;

    printf("Qual o n%cmero da sala de aula? ", 163);
    scanf("%d", &sala);
    printf("Qual a capacidade da sala? ");
    scanf("%d", &capacidade);
    printf("Quantos alunos est%co mariculados nessa sala? ", 198);
    scanf("%d", &alunos_matriculados);

    printf("\n\nSala %d\n\n", sala);
    printf("N%cmero da sala de aula:\t                %d\n", 163, sala);
    printf("Capacidade da sala de aula:\t        %d\n", capacidade);
    printf("Quantidade de cadeiras ocupadas:\t%d\n", alunos_matriculados);

    if(alunos_matriculados >= capacidade) {
        printf("\nA sala est%c lotada.\n\n", 160);
    } else {
        printf("\nA sala n%co est%c lotada.\n\n", 198, 160);
    }

    system("PAUSE");
    return 0;
}
