#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s",&nome);

    printf("Digite sua idade: ");
    scanf("%i",&idade);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Seu nome é %s, sua idade é %i e sua altura é %0.2f \n",nome,idade,altura);
}