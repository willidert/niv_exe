#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* vetor intro c selesção */
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] % 2 == 0){
            // escolhendo os números pares
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}