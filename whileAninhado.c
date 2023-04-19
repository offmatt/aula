//Asuunto: while aninhado
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    for(int i = 1; i <= 9 ; i++) {
        printf("Tabuada do %d\n", i);
        for(int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
