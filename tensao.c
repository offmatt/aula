//Divisor de tensão
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Divisor de tensao ****\n");

    float r1 = 10.0E3, // resistor de 10k
          r2 = 2.0E3, //fonte de 12v
          vin = 15.0,
          vout;

    vout = r2 / (r2 + r1) * vin;

    printf("V out = %.2E\n", vout);

    system("PAUSE");
    return 0;
}
