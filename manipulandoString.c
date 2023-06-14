#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[20];
    char sobrenome[20];
    char endereco[100];
    char bairro[100];
    char cidade[100];
    char cep[100];
    char telefone[100];

    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);

    printf("Digite seu sobrenome: ");
    fflush(stdin);
    gets(sobrenome);

    printf("Digite o endereço: ");
    fflush(stdin); //limpa o buffer do teclado
    gets(endereco);

    printf("Digite seu bairro: ");
    fflush(stdin);
    gets(bairro);

    printf("Digite sua cidade: ");
    fflush(stdin);
    gets(cidade);

    printf("Digite seu CEP: ");
    fflush(stdin);
    gets(cep);

    printf("Digite seu telefone: ");
    fflush(stdin);
    gets(telefone);

    system("CLS");
    printf("Nome: %s %s\n", nome, sobrenome);
    printf("Endereço: %s\n", endereco);
    printf("Bairro: %s\n", bairro);
    printf("Cidade: %s\n", cidade);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);

    system("PAUSE");
    return 0;
}
