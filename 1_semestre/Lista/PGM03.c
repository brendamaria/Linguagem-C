#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int din;
	
	printf("Ola, eu vou te ajudar na decis�o de ir ou nao ao cinema, digite a quantidade de dinheiro que tem: \n");
	scanf("%i",&din);
	
	if(din>=50){
		printf("Parece que voc� tem dinheiro para ir ao cinema, bom filme :)");
	}else{
		printf("Opa parece que voc� n�o tem dinheiro suficiente para ir ao cinema, melhor ficar em casa :(");
	}
}
