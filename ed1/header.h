/*
 1. Crie um TAD que represente os n�meros racionais (fra��es) que contenha as seguintes
fun��es de interface:
a) Cria racional (recebe dois inteiros: numerador e denominador);
b) Soma dois n�meros racionais (um novo elemento deve ser criado contendo a soma dos
dois);
c) Multiplica dois n�meros racionais (mesma interface da letra b)).
d) Testa se s�o iguais.
OBS: N�o precisa simplificar as fra��es (se conseguir � um plus)
*/

float criaRacional(num, den) {
    int i;
    for(i = 1; i <= num; i++) {
        if(num%i == 0 && den%i == 0) {
            num /= i;
            den /= i;
        }
    }
    printf("Seu numero racional e: %d/%d", num, den);
    return;
}

float somaRacionais() {
    return;
}

float multiplicaRacionais() {
    return;
}
