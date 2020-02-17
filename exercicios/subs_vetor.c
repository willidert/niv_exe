#include <stdio.h>

// 401 - Substituição no Vetor

int main(void)
{
    /* code */

    int vetor[10], menor = 100;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("Menor: %d\n", menor);

    printf("Ocorrencias: ");

    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] == menor){
            printf("%d ", i);
            vetor[i] = -1;
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}
