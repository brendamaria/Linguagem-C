#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float area,base,altura;

    printf("digite a base do triangulo: ");
    scanf("%f",&base);

    printf("digite a altura do triangulo: ");
    scanf("%f",&altura);

    area = (base * altura)/2;

    printf("A area do triangulo é %.2f \n",area);
    
    
}