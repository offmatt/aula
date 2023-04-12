//assunto: else if
//autor: Maria Herminia da Silva Rodriguez Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    int val;
    printf("Insira um valor: ");
    scanf("%d", &val);

    if(val == 1)
        printf("Valor igual a 1\n");
    else if(val == 2)
        printf("Valor igual a 2\n");
    else
        printf("Valor igual a x\n");

    system("PAUSE");
    return 0;
}

