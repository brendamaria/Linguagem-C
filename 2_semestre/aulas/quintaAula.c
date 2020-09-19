#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i,escolha,num,resultado;

    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-multiplicação\n");
    printf("4-divisão\n");

    switch (escolha){
    case 1:
        for (i = 0; i <= 10; i++){
            printf("%i + %i = %i\n",num,i,num*i);           
        }
        break;
    
    //case 2:
      //  break;

    default:
        break;
    }


}