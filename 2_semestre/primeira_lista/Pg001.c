#include<stdio.h>
#include<math.h>

int main(){
    int base,altura;
    float resultado;
    float areaB;

    printf("Digite a base do triangulo: ");
    scanf("%i",&base);

    printf("Digite a altura do triangulo: ");
    scanf("%i",&altura);

    areaB = base * base;
    resultado = (areaB * altura)/3;

    printf("O volume do triangulo é: %0.2f \n", resultado);

}