//assunto: verifica igualdade
//autor: Maria Herminia Oquendo
//data: 04/04/2023

#include <stdio.h>

int main() {

    float salario, vendas;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("Informe o valor em vendas R$: ");
    scanf("%f", &vendas);

    if(vendas > 10000.0)
        salario = salario + (salario/100.0*10.0);
        printf("O salario e %.2f\n", salario);


    system("PAUSE");
    return 0;
}
