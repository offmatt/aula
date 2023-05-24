//Assunto: aporte de bolsa de valores
//Autor: Maria Herminia Oquendo
//Data: 25/04/2003

//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//constantes
#define QTD_ACOES 6

//função principal
int main()
{
    float aporte;
    float ativo[QTD_ACOES];
    int qtd[QTD_ACOES];
    float total = 0;

    printf("Digite o valor maximo do aporte $: ");
    scanf("%f", &aporte);


    for(int i = 0; i < QTD_ACOES; i++)
    {
        printf("Ativo %d: ", i + 1);
        scanf("%f", &ativo[i]);
        printf("Qtd: ");
        scanf("%d", &qtd[i]);
    }

    for(int i = 0; i < QTD_ACOES; i++)
    {
        printf("Ativo %d: %.2f\n", i + 1, ativo[i]);
        printf("Qtd: %d\n", qtd[i]);
    }

    for(int i = 0; i < QTD_ACOES; i++)
    {
        total += ativo[i]*qtd[i];
    }

    printf("\nValor total: %.2f\n", total);

    if(total > aporte)
    {
        printf("\a");
        printf("\nSaldo insuficiente\n");
    }


    system("PAUSE");
    return 0;
}


/*
 __  __    __   ____  ____  ____  _____
(  \/  )  /__\ (_  _)(_  _)( ___)(  _  )
 )    (  /(__)\  )(    )(   )__)  )(_)(
(_/\/\_)(__)(__)(__)  (__) (____)(_____)
fonte bubblehead
*/


