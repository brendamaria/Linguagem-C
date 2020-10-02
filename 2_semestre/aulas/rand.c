#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int i;
    srand(time(NULL));

    printf("Gerador de numeros aleatorios: \n");

    for (i = 0; i < 6; i++){
        printf("numero: %d \n", rand() % 60);
    }
    
}