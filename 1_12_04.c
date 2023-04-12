//assunto: auxilio transporte
//autor: Maria Herminia da Silva Rodriguez Oquendo
//data: 12/04/2003

#include <stdio.h>

int main() {
    int idade;
    char carro;

    do {
        printf("Quantos anos voce tem? ");
        scanf("%d", &idade);
    } while((idade < 0) || (idade > 120));
    //quando eu escrevo palavras ele buga

    do {
        printf("Voce tem carro? [s/n] ");
        scanf(" %c", &carro);
    } while(((carro != 'n') && (carro != 'N')) && ((carro != 's') && (carro!= 'S')));

    //printf("%d, %d\n", idade, intcarro);

    if(((carro == 'n') || (carro == 'N')) && ((idade > 17) && (idade < 51))) {
        printf("Voce receber\xa0 aux\xa1lio transporte de R$500,00\n");
    }

    /*if(intcarro == 1)) {
        printf("Voce recebera auxilio transporte de R$200,00\n");
    }*/

    else{
        printf("Voce receber\xa0 aux\xa1lio transporte de R$200,00\n");
    }


    system("PAUSE");
    return 0;
}
