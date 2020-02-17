#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* lendo strings */
    char str[50], nome[10] =  "teste\n";
    
    fgets(str, sizeof(str), stdin);

    printf("%s\n", str);

    puts(str);

    printf("%d\n", strlen(nome));

    if(!strcmp("aba", "aba")){
        printf("Sim\n");
    }

    return 0;
}