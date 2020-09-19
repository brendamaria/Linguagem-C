#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

    int i;
    char nome[10];

    printf("digite o nome: ");
    scanf("%s",&nome);

    for (i = 0; i < strlen(nome) ; i++){
        printf("%c \n",nome[i]);
    }
    
}