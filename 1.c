//Asuunto: status de temperatura
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    float temperatura;


    printf("Qual a temperatura? ");
    scanf("%f", &temperatura);

    temperatura > 30.00 ? printf("H\n") : printf("L\n");

    system("PAUSE");
    return 0;
}
