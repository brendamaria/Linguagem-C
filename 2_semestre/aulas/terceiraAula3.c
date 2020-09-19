#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float media,n1,n2;

    printf("digite o nome do aluno: ");
    scanf("%s",&nome);

    printf("digite a primeira nota: ");
    scanf("%f",&n1);

    printf("digite a segunda nota: ");
    scanf("%f",&n2);

    media = (n1 + n2)/2;

    if(media >= 5){
        printf("APROVADO \n");
    }else{
        printf("REPROVADO \n");
    }

}