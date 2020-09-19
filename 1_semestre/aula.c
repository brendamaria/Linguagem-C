#include <locale.h>
#include <stdio.h>



int main(){ 
    int idade;
    printf("Digite sua idade");

    scanf("%d",&idade);

    printf("---------------------- \n");
    setlocale(LC_ALL, "Portuguese");

    printf("sua idade é: %d ", idade);

};