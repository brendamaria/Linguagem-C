#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
    
    setlocale(LC_ALL, "Portuguese");

    int tamanho;
    char str[50];

    printf("digite uma palavra: \n");
    scanf("%s", str);
    //gets(str);

    tamanho = strlen(str);

    printf("tamanho: %d \n", tamanho);

    return 0;
}