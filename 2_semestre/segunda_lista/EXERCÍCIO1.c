#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
    float raio,altura,area,volume;
    printf("Digite a altura: \n");
    scanf("%f",&altura);
    printf("Digite o raio: \n");
    scanf("%f",&raio);
    area = 2 * (raio * 2) + altura;
    volume = M_PI * pow(raio, 2) * altura;
    printf("volume: %.2f \narea: %.2f \n",volume,area);
    
}