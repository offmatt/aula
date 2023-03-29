//Conversao
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Conversao ****\n");

    float tc = 0.0, tf = 0.0;

    printf("Digite uma temperatura em Graus Celsius: ");
    scanf("%f", &tc);

    tf = (1.8 * tc) + 32;

    printf("A temperatura em Fahrenheits e %.2f\n", tf);

    system("PAUSE");
    return 0;
}
