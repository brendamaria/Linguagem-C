#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int OMN(int a, int b){
    if (a > b){
        return a;

    } else{
        return b;
    }   
        
}
int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int a, b, maior;

    printf("digite um numero: \n");
    scanf("%d",&a);

    printf("digite outro numero: \n");
    scanf("%d",&b);

    maior = OMN(a,b);

    printf("%d \n", maior);

}