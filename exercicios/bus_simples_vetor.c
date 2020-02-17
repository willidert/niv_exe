#include <stdio.h>


// 395 - Busca Simples no Vetor01

int main(void)
{
    int vetor[10], guess = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &vetor[i]);
    }

    scanf("%d", &guess);

    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] == guess){
            printf("SIM\n");
            return 0;
        }
    }

    printf("NAO\n");

    return 0;
}