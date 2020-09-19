#include <stdio.h>
#include <math.h>

int main(){
    int precoHora = 5,precoTresHoras = 10,horas,divisão,resultado,resto,resultadoR,precoAPagar;

    printf("digite a quantidade de horas que o onibus foi usado: ");
    scanf("%i",&horas);

    divisão = horas / 3;

    resultado = divisão * precoTresHoras;

    resto = horas % 3;

    resultadoR = resto * precoHora;

    precoAPagar = resultado + resultadoR;

    printf("O preço a pagar é: R$ %i \n",precoAPagar);
}