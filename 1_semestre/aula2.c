#include <locale.h>
#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade");
    scanf("%d",&idade);

    printf("--------------------- \n\n\n\n");
    printf("sua idade é: %d",idade);
    setlocale(LC_ALL, "Portuguese");



}