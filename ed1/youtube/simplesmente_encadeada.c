#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
}No;

//procedimento para inserir no inicio;
void inserir_no_inicio()

int main() {
    No *lista;
    int opcao, valor;

    do{
        printf("\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Remover\n\t3 - Imprimir\n\t4 - Inserir com prioridade\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            r = remover_da_fila(&fila);
            if(r){
                printf("Removido: %d\n", r->valor);
                free(r);
            }
            break;
        case 3:
            imprimir(fila);
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_com_prioridade(&fila, valor);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invaluda!\n");
        }

    }while(opcao != 0);


    return 0;
}
