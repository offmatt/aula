//assunto: operacoes
//autor: Maria Herminia Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    float n1, n2;
    int opt;

    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha a op\x87\xc6o: ");
    scanf("%d", &opt);

    if(opt == 1)
        printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    if(opt == 2)
        printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    if(opt == 3)
        printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    if(opt == 4)
        printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    else
        printf("Op\x87\xc6o inv\xa0lida\n");


    system("PAUSE");
    return 0;
}
