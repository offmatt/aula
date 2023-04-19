//Assunto: Incrementos e decrementos
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned a, b, c, d;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);

    printf("\nValores originais: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n\n", d);

    a++;
    b--;

    printf("Valores mudados: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n\n", d);

    system("PAUSE");
    return 0;
}
