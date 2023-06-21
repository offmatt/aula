/*
Autor: Maria Herminia Oquendo
Data: 18/06/2023
Instituição: Universidade Federal do Tocantins
Curso: Ciência da Computação
Professor: Wosley Arruda

Sobre: Um jogo de batalha naval para dois jogadores que mostra as posições dos navios por 3 segundos e depois some. Existem 4 navios de tamanho 1, 3 navios de tamanho 2, 2 navios de tamanho 3 e 1 navio de tamanho 4. Se um jogador acertar um navio ele continua jogando até errar. Cada posição que a pessoa acerta é somado um à sua pontuação, ao errar passa a vez para o outro jogador. Qaundo as 20 posições forem acertadas o jogo acaba, mostrando quem foi o vencedor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para a função sleep()

//constantes
#define TAMANHO 10
#define NAVIOS 20

//protótipos
void imprimeTabuleiro(char tabuleiro[TAMANHO][TAMANHO]);
void imprimeTabuleiroEscondido(char tabuleiroEscondido[TAMANHO][TAMANHO]);
void inicializaTabuleiro(char tabuleiro[TAMANHO][TAMANHO]);
void inicializaTabuleiroEscondido(char tabuleiroEscondido[TAMANHO][TAMANHO]);
void colocaNavios(char tabuleiro[TAMANHO][TAMANHO]);
void abertura(int pontos1, int pontos2);
int ehValido(int x, int y);
int temNavio(char tabuleiro[TAMANHO][TAMANHO], int x, int y);

char tabuleiro[TAMANHO][TAMANHO];
char tabuleiroEscondido[TAMANHO][TAMANHO];
char y;
int pontos1 = 0, pontos2 = 0, x;

// Função principal do jogo
int main()
{
    //system("cls"); // windows
    system("clear"); // Linux

    // Inicializa o tabuleiro para ambos os jogadores
    inicializaTabuleiro(tabuleiro);
    inicializaTabuleiroEscondido(tabuleiroEscondido);

    // Posiciona os navios no tabuleiro
    colocaNavios(tabuleiro);

    // Mostra o tabuleiro por 3 segundos
    abertura(pontos1, pontos2);
    imprimeTabuleiro(tabuleiro);
    sleep(3);
    //system("cls"); // windows
    system("clear"); // Linux

    // Início do jogo
    while (1)
    {
        while(1)
        {
            //system("cls"); // windows
            system("clear"); // Linux
            abertura(pontos1, pontos2);
            imprimeTabuleiroEscondido(tabuleiroEscondido);

            printf("Jogador 1: Digite as coordenadas (4 G): ");
            scanf("%d %c", &x, &y);

            x--;
            y -= 65;

            printf("\n%c %d\n", y, y);

            if (ehValido(x, y))
            {
                if (temNavio(tabuleiro, x, y))
                {
                    printf("Acertou!\n");
                    tabuleiroEscondido[x][y] = 'X';
                    pontos1++;

                    if (pontos1 + pontos2 == NAVIOS)
                    {
                        break;
                    }
                }
                else
                {
                    printf("Errou!\n");
                    tabuleiroEscondido[x][y] = 'O';
                    break;
                }
            }
            else
            {
                printf("Coordenadas inválidas! Tente novamente.\n");
                continue;
            }
        }
        
        while(1)
        {
            //system("cls"); // windows
            system("clear"); // Linux
            abertura(pontos1, pontos2);
            imprimeTabuleiroEscondido(tabuleiroEscondido);

            printf("Jogador 2: Digite as coordenadas (4 G): ");
            scanf("%d %c", &x, &y);

            x--;
            y -= 65;

            if (ehValido(x, y))
            {
                if (temNavio(tabuleiro, x, y))
                {
                    printf("Acertou!\n");
                    tabuleiroEscondido[x][y] = 'X';
                    pontos2++;

                    if (pontos1 + pontos2 == NAVIOS)
                    {
                        break;
                    }
                }
                else
                {
                    printf("Errou!\n");
                    tabuleiroEscondido[x][y] = 'O';
                    break;
                }
            }
            else
            {
                printf("Coordenadas inválidas! Tente novamente.\n");
                continue;
            }
        }        

        if (pontos1 + pontos2 == NAVIOS)
        {
            break;
        }
    }

    if (pontos1 > pontos2)
    {
        printf("Jogador 1 venceu!\n");
    }
    else if (pontos2 > pontos1)
    {
        printf("Jogador 2 venceu!\n");
    }
    else
    {
        printf("Empatou!\n");
    }

    return 0;
}

// Função para imprimir o tabuleiro
void imprimeTabuleiro(char tabuleiro[TAMANHO][TAMANHO])
{
    printf("\n   ");
    for (int i = 65; i < 75; i++)
    {
        printf("| %c ", i);
    }
    printf("|\n--------------------------------------------\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf("| %c ", tabuleiro[i][j]);
        }
        printf("|\n--------------------------------------------\n");
    }
    printf("\n");
}

// Função para imprimir o tabuleiro
void imprimeTabuleiroEscondido(char tabuleiroEscondido[TAMANHO][TAMANHO])
{
    printf("\n   ");
    for (int i = 65; i < 75; i++)
    {
        printf("| %c ", i);
    }
    printf("|\n--------------------------------------------\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf("| %c ", tabuleiroEscondido[i][j]);
        }
        printf("|\n--------------------------------------------\n");
    }
    printf("\n");
}

// Função para verificar se as coordenadas são válidas
int ehValido(int x, int y)
{
    return (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO);
}

// Função para inicializar o tabuleiro
void inicializaTabuleiro(char tabuleiro[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Função para inicializar o tabuleiro
void inicializaTabuleiroEscondido(char tabuleiroEscondido[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabuleiroEscondido[i][j] = ' ';
        }
    }
}

// Função para posicionar os navios aleatoriamente
void colocaNavios(char tabuleiro[TAMANHO][TAMANHO])
{
    tabuleiro[0][2] = 'N';
    tabuleiro[0][3] = 'N';
    tabuleiro[1][5] = 'N';
    tabuleiro[1][6] = 'N';
    tabuleiro[1][8] = 'N';
    tabuleiro[2][3] = 'N';
    tabuleiro[2][8] = 'N';
    tabuleiro[3][3] = 'N';
    tabuleiro[3][8] = 'N';
    tabuleiro[4][3] = 'N';
    tabuleiro[5][3] = 'N';
    tabuleiro[5][6] = 'N';
    tabuleiro[5][7] = 'N';
    tabuleiro[6][1] = 'N';
    tabuleiro[6][9] = 'N';
    tabuleiro[8][1] = 'N';
    tabuleiro[8][3] = 'N';
    tabuleiro[8][7] = 'N';
    tabuleiro[8][8] = 'N';
    tabuleiro[8][9] = 'N';

}

// Função para verificar se há um navio nas coordenadas fornecidas
int temNavio(char tabuleiro[TAMANHO][TAMANHO], int x, int y)
{
    return (tabuleiro[x][y] == 'N');
}

void abertura(int pontos1, int pontos2)
{
    printf("********************************************\n");
    printf("*************  Batalha Naval  **************\n");
    printf("********************************************\n\n");

    printf("Jogador 1: %d pontos\n", pontos1);
    printf("Jogador 2: %d pontos\n\n", pontos2);
}
