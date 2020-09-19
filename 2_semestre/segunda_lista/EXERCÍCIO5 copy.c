#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

    int lados[3],i,resultado,teste;

    while (i < 3) {
        printf("Digite o %i lado: ",i + 1);
        scanf("%i",&teste);

        if(teste != 0){
            lados[i] = teste;
        } else{
            printf("Digite um numero diferente de 0.\n");
            continue;
        }
        
        resultado = resultado + lados[i];
        i++;

    }

    if(resultado == 180){
        printf("O triangulo é valido. \n");
    } else{
        printf("O triangulo não é valido. \n");
    }

}