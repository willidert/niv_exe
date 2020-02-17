#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* Vetor simples */
    int vet[10]; // declaração do vetor

    // ele ta preenchido com lixo
    // inicializando o vetor

    for (int i = 0; i < 10; i++)
    {
        vet[i]  = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}
