/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Protótipo das Funções --- */
void arrobas();
void asteriscos();
void sustenidos();
void dolars();
void generica(char chr, int num);

/* ========================================================================= */
/* --- Função Principal --- */
int main() {

    unsigned numero;

    while(1) {

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero == 6) arrobas();
        if(numero == 7) asteriscos();
        if(numero == 8) sustenidos();
        if(numero == 9) dolars();

        if(numero == 1) generica('1', 15);
        if(numero == 2) generica('2', 10);
        if(numero == 3) generica('3', 30);

        if(!numero) break;

    } //fim do while


    system("PAUSE");
    return 0;
} //fim do main

/* ========================================================================= */
/* --- Desenvolvimento de Procedimentos --- */

void arrobas(){

    char arrob;

    for(arrob=0; arrob<10; arrob++)
        putchar('@');

    putchar('\n');
}

void asteriscos() {

    char asts;

    for(asts=0; asts<10; asts++)
        putchar('*');

    putchar('\n');

}
  }

/* ========================================================================= */
/* --- Desenvolvimento das Funções --- *///funções passa parametros, e procedimentos não

void generica(char chr, int num) {

    char gen;

    for(gen=0; gen<num; gen++)
        putchar(chr);

    putchar('\n');

}
