//assunto
//autor
//data: 05/04/2023


#include <stdio.h>

int main() {
    int dist, temp;

    printf("Entre com a distancia em cm: ");
    scanf("%d", &dist);

    if(dist <= 25) {
        printf("Robo desvia obstaculo.\n");
        temp = dist;
    }

    if(temp != dist) {
        printf("O robo detectou um obstaculo.\n");
    } else {
    printf("O robo nao detectou obstaculo.\n");
    }

    system("PAUSE");
    return 0;
}
