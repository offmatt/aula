//Adicionando numeros
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Adicionando numeros ****\n");

    int num1 = 0, num2 = 0, res = 0;

    printf("Digite um numero: ");
    scanf(" %d", &num1);

    printf("Digite outro numero: ");
    scanf(" %d", &num2);

    res = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, res);

    system("PAUSE");
    return 0;
}
