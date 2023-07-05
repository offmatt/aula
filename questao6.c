//Questão 1
//Disciplina: Lógica de Programação
//Autoras: Maria Herminia Oquendo e Heloisa Rolins
//Professor: Wosley Arruda
//Data: 05/07/2023

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int h, i,j, qtd_tipos, qtd_tamanhos, tipo, tamanho, qtd_pecas, pedidos, vendas = 0;

    //Tamanho da matriz
    do
    {
        scanf ("%d%d",&qtd_tipos, &qtd_tamanhos);

    }
    while ((qtd_tipos < 1 || qtd_tipos > 500) || (qtd_tamanhos < 1 || qtd_tamanhos > 500));

    //Iniciando a matriz
    int matriz[qtd_tipos][qtd_tamanhos];
    for (i=0;i<qtd_tipos;i++){
        for (j=0;j<qtd_tamanhos;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    //Quantidade de pedidos
    do
    {
        scanf("%d", &pedidos);
    }
    while (pedidos < 1 || pedidos > 1000);

    //Verifica se existe a roupa
    for (h = 0; h < pedidos; h++)
    {
            scanf("%d%d", &tipo, &tamanho);
            tipo--;
            tamanho--;

        if (matriz[tipo][tamanho] > 0)
        {
            vendas++;
            matriz[tipo][tamanho]--;
        }
    }

    printf("%d\n", vendas);

    return 0;
}


