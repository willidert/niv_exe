#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* Lendo dados e armazenando no vetor */
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
