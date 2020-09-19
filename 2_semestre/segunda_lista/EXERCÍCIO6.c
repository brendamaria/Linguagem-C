#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

    int lados[3],i;
    
    for (i = 0; i < 3; i++){
        printf("Digite o %i lado: ",i + 1);
        scanf("%i",&lados[i]);
    }

    if(lados[0] + lados[1] > lados[2] && lados[0] + lados[2] > lados[1] && lados[1] + lados[2] > lados[0]){
        printf("O triangulo é valido. \n");
    } else{
        printf("O triangulo não é valido. \n");
    }
    
}