//Buffer
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Buffer ****\n");

    char carac1, carac2;

    printf("Digite um caractere: ");
    scanf(" %c", &carac1); // o buffer acontece pq ele l� o enter como um caractere, por isso voce precisa colocar um espa�o antes

    printf("Digite outro caractere: ");
    scanf(" %c", &carac2);

    printf("Os caracteres digitados foram %c e %c\n", carac1, carac2);

    system("PAUSE");
    return 0;
}

