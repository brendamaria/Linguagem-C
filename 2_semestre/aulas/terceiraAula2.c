#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    char nome[20];

    printf("digite sua idade: ");
    scanf("%i",&idade);

    printf("digite seu nome: ");
    scanf("%s",&nome);

    if(idade<18){
        printf("%s, melhor ficar em casa \n",nome);
    }else{
        printf("%s, você pode ir ao cinema \n",nome);
    }
    

}