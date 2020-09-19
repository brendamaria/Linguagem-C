#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade1,idade2,idade3;
    char nome1[20],nome2[20],nome3[20];
    float peso1,peso2,peso3,media;

    printf("Digite seu nome: \n");
    scanf("%s",&nome1);

    printf("Digite sua idade: \n");
    scanf("%i",&idade1);

    printf("Digite seu peso: \n");
    scanf("%f",&peso1);

    printf("Digite seu nome: \n");
    scanf("%s",&nome2);

    printf("Digite sua idade: \n");
    scanf("%i",&idade2);

    printf("Digite seu peso: \n");
    scanf("%f",&peso2);

    printf("Digite seu nome: \n");
    scanf("%s",&nome3);

    printf("Digite sua idade: \n");
    scanf("%i",&idade3);

    printf("Digite seu peso: \n");
    scanf("%f",&peso3);

    media = (peso1 + peso2 + peso3)/3;

    printf("A média dos pesos é: %.2f \n",media);

    printf("idade1: %i, idade2: %i, idade3: %i \n",idade1,idade2,idade3);


}