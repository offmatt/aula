/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Protótipo das Funções --- */
void box(int num);
int div_rest(int a, int b);
void oscilador(float Ra, float Rb, float C);

/* ========================================================================= */
/* --- Função Principal --- */
int main() {

    float Ra, Rb, C;

    oscilador(2000, 1000, 555);

    system("PAUSE");
    return 0;
} //fim do main


void box(int num) {

    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O %d |\n", num);
    printf("|               |\n");
    printf("+++++++++++++++++\n\n");
}

int div_rest(int a, int b) {

    printf("\nDivisao = %d\n", a/b);
    printf("Resto = %d\n\n", a%b);
}

void oscilador(float Ra, float Rb, float C){

    float f;

    f = 1,44 / ((Ra + Rb) * C);

    printf("%f\n", f);
}
