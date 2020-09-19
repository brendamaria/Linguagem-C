#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

   char cData;
   
   printf("Entre com um caracter : ");
   scanf("%c",&cData);
 
   if((cData >='a' && cData <='z') || (cData >='A' && cData <='Z')){
      printf("O caracter digitado pertence ao alfabeto.\n");
   } else{
     printf("O caracter digitado pertence aos numerais.\n");
   }


}