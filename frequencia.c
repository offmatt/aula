//Cálculo da frequência de cortes
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Calculo da frequencia de cortes ****\n");

    float c = 1.0E-6, // capacitor de 1 uC
          r = 3.0E3, // resistor de 3kohm
          pi = 3.1415,
          f; //frequência

    f = 1 / (2 * pi * r * c);

    printf("A frequencia de cortes de um filtro passa-baixas e %.2E\n", f);

    system("PAUSE");
    return 0;
}
