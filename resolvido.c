//Asuunto: Evercício resolvido
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    int a, b, c, d, soma;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);

    soma = a + b + c + d;
    b--;
    d = c + b;
    c = a;
    a++;
    soma += a + b + c + d;

    printf("\na = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("soma = %d\n\n", soma);

    system("PAUSE");
    return 0;
}
