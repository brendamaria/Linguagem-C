#include <stdio.h>
#include <math.h>

int main(){
    float raio,altura,volume,area,base,lado;

    printf("digite a altura do cilindro: ");
    scanf("%f",&altura);

    printf("digite o raio do cilindro: ");
    scanf("%f",&raio);

    base = 2 * M_PI * pow(raio,2);

    lado = 2 * M_PI * raio * altura;

    area = base + lado;

    volume = M_PI * pow(raio,2) * altura;

    printf("A area do cilindro é: %0.2f \n", area);
    printf("O volume do cilindro é: %0.2f \n",volume);
    
}