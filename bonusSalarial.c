//Asuunto: Bônus salarial
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    float salario, vendas;

    printf("Qual o seu salario? ");
    scanf("%f", &salario);
    printf("Quanto voce vendeu em reais? ");
    scanf("%f", &vendas);

    printf("Voce recebera R$%.2f\n",  vendas > 10000.00 ? 1.1 * salario : salario);

    system("PAUSE");
    return 0;
}
