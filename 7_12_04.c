//assunto: Resistores
//autor: Maria Herminia Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    printf("Sum\xa0rio:\nI = corrente;\nP = pot\x88ncia;\nV = Tens\xc6o;\nR = Resist\x88ncia\n");

    float V, R, I, P;
    int opt;

    printf("\nEntre a tens\xc6o: ");
    scanf("%f", &V);
    printf("Entre a resist\x88ncia: ");
    scanf("%f", &R);

    printf("\n1 - Corrente que circula pelo resistor\n");
    printf("2 - Pot\x88ncia dissipada no resistor\n");
    printf("3 - Valor da ten\xc6o para corrente de 100mA\n");

    printf("\nEscolha a op\x87\xc6o: ");
    scanf("%i", &opt);

    I = V / R;
    P = I * V;
    V = 0.1 * R;

    if(opt == 1)
        printf("\nI = %.2f / %.2f = %.2f\n\n", V, R, I);
    else if(opt == 2)
        printf("\nP = %.2f * %.2f = %.2f\n\n", I, V, P);
    else if(opt == 3)
        printf("\nV = 0,1 * %.2f = %.2f\n\n", R, V);
    else
        printf("\nOp\x87\xc6o inv\xa0lida\n\n");


    system("PAUSE");
    return 0;
}
