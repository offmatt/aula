//Lei de Ohm
//Autor:Maria Herminia Oquendo
//Data: 29/03/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("**** Lei de Ohm ****\n");

    float resistor = 5.03E3, // resistor de 5k
          voltage = 12.0, //fonte de 12v
          current;

    current = voltage / resistor; // Lei de Ohm

    printf("I = %.2E\n", current); // E = notação científica

    system("PAUSE");
    return 0;
}
