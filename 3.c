//assunto: Verifica se igual
//autor: Maria Herminia Oquendo
//data: 05/04/2023


#include <stdio.h>

int main() {

    int val_a = 0, val_b = 0;

    printf("Insira um numero: ");
    scanf("%d", &val_a);

    printf("Insira outro numero: ");
    scanf("%d", &val_b);

    if(val_a == val_b) {
        printf("Os numeros %d e %d são iguais\n", val_a, val_b);
    } else {
        printf("Os numeros %d e %d sao diferentes\n", val_a, val_b);
    }

    system("PAUSE");
    return 0;

}
