#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    ///*
    char str[30+1];
    char str2[10] = "Matteo";
    char str3[3] = {'M', 'a', 't', 't', 'e', 'o'};
    char str4[] = "Matteo";
    int i = 8;

    printf("\n%s\n", str4);

    //ja tem o \n
    puts("Hello");
    putchar('\n');
    puts(str4);
    printf(str4);

    char nome[20];
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    printf("O nome digitado foi: %s\n", nome);

    char sobrenome[20];
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("O nome digitado foi: %s %s\n", nome, sobrenome);
    //*/

    char endereco[100];
    printf("Digite o endereço: \n");
    fflush(stdin); //limpa o buffer do teclado
    gets(endereco);
    printf("O endereço é: %s\n", endereco);

    return 0;
}
