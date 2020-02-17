#include <stdio.h>
#include <stdlib.h>


// 47 - Código

int main(void)
{
    int *vetor, n = 0, cont = 0;

    scanf("%d ", &n);

    vetor = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    if(n <= 2){
        printf("%d", cont);
        return 0;
    } else{
        for (int i = 0; i < n - 2; i++)
        {
        if(vetor[i] == 1 && vetor[i + 1] == 0 && vetor[i+2] == 0){
            cont++;
        }
        }        
    }

    printf("%d\n", cont);

    return 0;
}