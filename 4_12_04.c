//assunto: adivinhacao
//autor: Maria Herminia da Silva Rodriguez Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    int numero, chute;
    printf("Insira um n\xa3mero de 0 a 10: ");
    scanf("&d", &numero);

    if(numero < 0 || numero > 10) {
        printf("Entrada inv\xa0lida. O n\xa3mero ser\xa0 5.\n");
        numero = 5;
        system("PAUSE");
    }
    system("CLS"); // limpa a pagina

    printf("Adivinhe o n\xa3mero: ");
    scanf("&d", &chute);

    if(chute == numero)
        printf("Acertou, o n\xa3mero \x82 %d!!!\n", numero); // \x para colocar acento, 82 na tabela ascii estendida, em hexadecimal(x)
    else if(chute > numero)
        printf("Errou, o n\xa3mero \x82 menor!\n");
    else (chute < numero)
        printf("Errou, o n\xa3mero \x82 maior!\n");


    return 0;
}


