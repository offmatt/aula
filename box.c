#include <stdio.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 6

void imprimeMatriz();

int main()
{
    int box[LINHA][COLUNA] = {0}, linha, coluna, novo, repete;

    do
    {
        imprimeMatriz(box);

        printf("\n\n");

        do
        {
            printf("Digite a linha da matriz: ");
            scanf("%d", &linha);
        }
        while (linha < 1 || linha > 4);

        do
        {
            printf("Digite a coluna da matriz: ");
            scanf("%d", &coluna);
        }
        while (coluna < 1 || coluna > 6);

        do
        {
            printf("Digite um numero de 1 a 99 para adicionar: ");
            scanf("%d", &novo);
        }
        while (novo < 1 || novo > 99);

        box[linha - 1][coluna - 1] = novo;

        imprimeMatriz(box);

        printf("\n\nDigite 0 para sair.\n");
        printf("Digite 1 para continuar.\n");
        scanf("%d", &repete);

    } while(repete);

    return 0;
}

void imprimeMatriz(int box[LINHA][COLUNA])
{
    system("cls");
        for(int i = 0; i < LINHA; i++)
        {
            printf("\n-------------------------\n|");
            for(int j = 0; j < COLUNA; j++)
            {
                printf("%3d|", box[i][j]);
            }
        }
        printf("\n-------------------------");
}
