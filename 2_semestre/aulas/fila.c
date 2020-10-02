#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
    
    setlocale(LC_ALL, "Portuguese");

    int i, vetor[6] = {7,20,34,89,78,4};

    for (i = 0; i <= 5 ; i++){
        printf("vetor[%d] = %d \n",i,vetor[i]);
    }
    


}