//Contas
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Contas ****\n");

    float num1 = 0.0, num2 = 0.0, res = 0.0;

    printf("Digite um numero: ");
    scanf(" %f", &num1);

    printf("Digite outro numero: ");
    scanf(" %f", &num2);

    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

    system("PAUSE");
    return 0;
}
