//Assunto: Questão 21
//Aluno Maria Herminia da Silva Rodriguez Oquendo
//Data: 03/05/2023

#include <stdio.h>
#include <stdlib.h>

int main() {

    int dependentes;
    float salario_minimo, salario_funcionario, taxa_ja_paga, imposto_bruto, imposto_a_pagar;

    printf("Digite o valor do sal%crio m%cnimo atual: ", 160, 161);
    scanf("%f", &salario_minimo);
    printf("Digite a quantidade de dependentes do funcion%crio: ", 160);
    scanf("%d", &dependentes);
    printf("Digite o valor do sal%crio do funcion%crio: ", 160, 160);
    scanf("%f", &salario_funcionario);
    printf("Digite a taxa de imposto normal j%c paga pelo funcion%crio: ", 160, 160);
    scanf("%f", &taxa_ja_paga);

    if(salario_funcionario > (salario_minimo*12)) {
        imposto_bruto = 0.2*salario_funcionario;
        imposto_a_pagar = 1.04*imposto_bruto;
        printf("\n\nO funcion%crio dever%c pagar R$%.2f de imposto de renda.\n", 160, 160, imposto_a_pagar);
    } else if(salario_funcionario > (salario_minimo*5)) {
        imposto_bruto = 0.08*salario_funcionario;
        imposto_a_pagar = 1.04*imposto_bruto;
        printf("\n\nO funcion%crio dever%c pagar R$%.2f de imposto de renda.\n", 160, 160, imposto_a_pagar);
    } else {
        printf("\n\nO funcion%crio nao pagar%c imposto de renda.\n", 160, 160);
    }

    system("PAUSE");
    return 0;
}
