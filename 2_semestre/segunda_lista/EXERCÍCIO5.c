#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

    int lados[3],i,resultado,teste;

    for (i = 0; i < 3; i++){
        printf("Digite o %i lado: ",i + 1);
        scanf("%i",&lados[i]);
        
        resultado = resultado + lados[i];

    }

    if(resultado == 180){
        printf("O triangulo é valido. \n");
    } else{
        printf("O triangulo não é valido. \n");
    }
    

}