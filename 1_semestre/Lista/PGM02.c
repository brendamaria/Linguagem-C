#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,som,mult,sub,di;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i",&n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%i",&n2);
	
	som = n1 + n2;
	mult = n1 * n2;
	sub = n1 - n2;
	di = n1 / n2;
	
	printf("o resultado da soma é: %d\n",som);
	printf("o resultado da multiplicação é: %d\n",mult);
	printf("o resultado da subtração é: %d\n",sub);
	printf("o resultado da divisão é: %d\n",di);
}
