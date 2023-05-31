#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define num 10

void func(int vet[5]);
void func2parametros(int vet[], int N);
void func3generica(int vet[], int N);
int funcComIndex(int vet[], int N, int index);

int main()
{
    float vrms[5] = {1.5, 3.8, 4.9, 5.7, 2.1};
    int v[num] = {12, 27, 4, 3, 2};

    /*
    func(v);

    func2parametros(v, 5);

    func3generica(v, num);

    */
    int i;
    for(i = 0; i < num; i++)
        printf("vetor v[%d] com o index = %d\n", i, true_rms(vrms, num, i));

    system("PAUSE");
    return 0;
}

void func(int vet[5])
{
    int i;
    for(i = 0; i < 5; i++)
        printf("vetor v[%d] = %d\n", i, vet[i]);

}

void func2parametros(int vet[], int N)
{
    int i;
    for(i = 0; i < N; i++)
        printf("vetor v[%d] = %d com 2 parametros\n", i, vet[i]);

}

void func3generica(int vet[], int N)
{
    int i;
    for(i = 0; i < N; i++)
        printf("vetor v[%d] com 2 generica = %d\n", i, vet[i]);
}

int funcComIndex(int vet[], int N, int index)
{
    int i;
    for(i=0; i< N; i++)
        vet[i] = 4*i;

    return vet[index];
}

int func1(int vet[], int N, int index, int interval)
{
    int i;
    for(i = 0; i < N; i++)
        vet[i] = interval*1;
    return vet[index];
}

void true_rms(float volts[], int N)
{
    register int i;
    float rms = 0.0;
    for(i=0;i<N;i++)
        volts[i] *= volts[i];

    for(i = 0; i < N; i++)
        rms += volts[i];
    rms /= N;
    return sqrt(rms);

}
