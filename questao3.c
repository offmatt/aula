//Questão 1
//Disciplina: Lógica de Programação
//Autoras: Maria Herminia Oquendo e Heloisa Rolins
//Professor: Wosley Arruda
//Data: 05/07/2023


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int **matr = &matriz;
    //int **matri = &*matr;

    printf (" - %d\n",*matr);
    printf ("A - %d\n",**matri);


    system("PAUSE");
    return 0;
}


