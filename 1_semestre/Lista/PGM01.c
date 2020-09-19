#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int ma;
	
	printf("Digite um número: \n");
	scanf("%i",&n1);
	
	printf("Digite outro número: \n");
	scanf("%i",&n2);
	
	ma = n1 + n2;
	
	printf("O resultado da média aritimetica é: %d\n",ma);
	
}
