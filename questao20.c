//Assunto: Questão 20
//Aluno Maria Herminia da Silva Rodriguez Oquendo
//Data: 03/05/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("Digite um n%cmero inteiro: ", 163);
    scanf("%d", &numero);

    if(((numero%3) == 0)&&((numero%5)==0))
        printf("\nO n%cmero %d %c divis%cvel por 3 e por 5 ao mesmo tempo.\n\n", 163, numero, 130, 161);
    else
        printf("\nO n%cmero %d n%co %c divis%cvel por 3 e por 5 ao mesmo tempo.\n\n", 163, numero, 198, 130, 161);

    system("PAUSE");
    return 0;
}

