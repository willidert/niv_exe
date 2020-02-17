#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *vetor, *vetor2, n = 0;

    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));
    vetor2 = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        vetor2[i] = vetor[i];
    }

    // percorro o primeiro vetor e faço as alteraçoes no segundo
    // deve ter outro mais agora eu to c sono
    
    for (int i = 0; i < n; i++)
    {
        if( i == 0){
            if(vetor[i] != 0){
                vetor2[i+1]++;
            }
        }else if(i == n-1){
            if(vetor[i] != 0){
                vetor2[i-1]++;
            }
        }else{
            if(vetor[i] != 0){
                vetor2[i+1]++;
                vetor2[i-1]++;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", vetor2[i]);
    }

    return 0;
}