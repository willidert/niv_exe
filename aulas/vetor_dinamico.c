#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* vetor dinâmico */
    int *vet, n;

    scanf("%d", &n);

    vet = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        vet[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}
