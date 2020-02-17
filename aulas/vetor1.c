// Vetor Estático
// O seu tamanho não pode ser alterado
// a n ser q se altere o código fonte


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* vetor Intro */
    int vetor[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("valor: %d na pos: %d\n", vetor[i], i);
    }

    printf("\n");
    return 0;
}
