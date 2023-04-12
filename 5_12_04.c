//assunto:
//autor: Maria Herminia da Silva Rodriguez Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    int numero = 0, chute;
    printf("Adivinhe o numero: ");
    scanf("&d", &chute);

    if(chute == numero)
        printf("Acertou, o numero \x82 %d!!!\n", numero); // \x para colocar acento, 82 na tabela ascii estendida, em hexadecimal(x)
    else if(chute > numero)
        printf("Errou, o numero \x82 menor!\n");
    else (chute < numero)
        printf("Errou, o numero \x82 maior!\n");


    system("PAUSE");
    return 0;
}

