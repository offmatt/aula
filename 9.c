//assunto: verifica igualdade
//autor: Maria Herminia Oquendo
//data: 05/04/2023


#include <stdio.h>

int main() {

    int val_a = 0, val_b = 0;

    printf("Digite um valor: ");
    scanf("%d", &val_a);

    printf("Digite outro valor: ");
    scanf("%d", &val_b);

    if(val_a <= val_b) {
        printf("%d %d\n", val_a, val_b);
    } else {
        printf("%d %d\n", val_b, val_a);
    }

    system("PAUSE");
    return 0;
}
