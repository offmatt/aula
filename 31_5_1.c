#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, i, b = 0;

    for(i = 0; i < 6; i++)
    {
        if ((i = 0) || (i = 1) || (i = 5))
            b += A[i];
    }
    printf("%d\n\n", b);

    A[3] = 100;

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }

    system("PAUSE");
    return 0;
}
