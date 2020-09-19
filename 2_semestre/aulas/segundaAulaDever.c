#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

int main(){
    int idade;
    int valor;
    int conta;

    printf("digite sua idade: ");
    scanf("%i",&idade);

    printf("digite o valor a ser depositado: ");
    scanf("%i",&valor);

    printf("digite o numero da conta: ");
    scanf("%i",&conta);

    printf("uma pessoa de %d anos, depositou %d na conta %d.\n",idade,valor,conta);

}