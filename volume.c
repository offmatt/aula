//Calculo do volume
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Calculo do volume ****\n");

    float pi = 3.1415, r = 0.0, h = 0.0, v = 0.0; //j� inicia a vari�vel para n�o pegar res�duos da mem�ria

    printf("Qual o tamanho do raio? ");
    scanf("%f", &r);

    printf("Qual o tamanho da altura? ");
    scanf("%f", &h);

    v = pi * r * r * h;

    printf("Volume do cilindro = %.2f metros cubicos\n", v);

    system("PAUSE");
    return 0;
}
