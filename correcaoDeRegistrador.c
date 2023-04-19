//Asuunto: Correção de registrador
//Nome: Maria Herminia Oquendo
//Data: 19/04/2023


#include <stdio.h>

int main() {

    unsigned char regist = 0x00;

    printf("Carregue um valor no registrador 00h a FFh: ");
    scanf("%X", &regist);

    printf("Valor carregado: %Xh\n", regist);

    regist = regist ? 0x80 : 0x00;

    printf("Valor corrigido: %Xh\n", regist);

    system("PAUSE");
    return 0;
}
