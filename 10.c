//assunto: adiciona bonus a salario
//autor: Maria Herminia Oquendo
//data: 05/04/2023


#include <stdio.h>

int main() {

    float salario = 0, vendas = 0, bonus = 0;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    if(vendas > 10000.0 && vendas <= 20000.0) {
        salario += 0.1 * salario;
        printf("Seu salario sera de R$%.2f\n", salario);
    }

    if(vendas > 20000.0 && vendas <= 30000.0) {
        salario += 0.15 * salario;
        printf("Seu salario sera de R$%.2f\n", salario);
    }

    if(vendas > 30000.0) {
        salario += 0.25 * salario;
        printf("Seu salario sera de R$%.2f\n", salario);
    }

    else{
        printf("Seu salario sera de R$%.2f\n", salario);
    }

    system("PAUSE");
    return 0;
}
