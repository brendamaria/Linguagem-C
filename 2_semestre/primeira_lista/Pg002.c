#include<stdio.h>
#include<math.h>

int main(){
    float resultado,raio,altura,areaLata,lado,base;
    int preco = 10;

    printf("digite a altura da lata em metros: \n");
    scanf("%f",&altura);

    printf("digite o raio da lata em metros: \n");
    scanf("%f",&raio);
    
    base = 2 * M_PI * pow(raio,2);

    lado = 2 * M_PI * raio * altura;

    areaLata = base + lado;

    resultado = areaLata * preco;

    printf("o preço de %0.2f m2 é: R$ %0.2f. \n",areaLata,resultado);

}
