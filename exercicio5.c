//assunto: exercicio 2
//autor: Maria Herminia Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Quantidade de chuteiras:");
    printf("Entre o n%cmero de chuteiras da marca A: ", 163);
    scanf("%d", &a);
    printf("Entre o n%cmero de chuteiras da marca B: ", 163);
    scanf("%d", &b);
    printf("Entre o n%cmero de chuteiras da marca C: ", 163);
    scanf("%d", &c);

    printf("\n\t\tQuantidade de chuteiras em estoque:\n");
    printf("\tQuantidade de chuteiras da marca A: %d\n", a);
    printf("\tQuantidade de chuteiras da marca B: %d\n", b);
    printf("\tQuantidade de chuteiras da marca C: %d\n\n", c);


    system("PAUSE");
    return 0;
}
