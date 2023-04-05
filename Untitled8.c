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

    if(val_a == val_b) {
        printf("%d igual a %d\n", val_a, val_b);
    }
    if(val_a < val_b) {
        printf("%d menor que %d\n", val_a, val_b);
    }
    if(val_a > val_b) {
        printf("%d maior que %d\n", val_a, val_b);
    }
    if(val_a <= val_b) {
        printf("%d menor ou igual a %d\n", val_a, val_b);
    }
    if(val_a >= val_b) {
        printf("%d maior ou igual a %d\n", val_a, val_b);
    }
    if(val_a != val_b) {
        printf("%d diferente de %d\n", val_a, val_b);
    }

}
