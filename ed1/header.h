/*
 1. Crie um TAD que represente os números racionais (frações) que contenha as seguintes
funções de interface:
a) Cria racional (recebe dois inteiros: numerador e denominador);
b) Soma dois números racionais (um novo elemento deve ser criado contendo a soma dos
dois);
c) Multiplica dois números racionais (mesma interface da letra b)).
d) Testa se são iguais.
OBS: Não precisa simplificar as frações (se conseguir é um plus)
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
