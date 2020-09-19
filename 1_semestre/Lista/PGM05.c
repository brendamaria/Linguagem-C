#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int n3;
	char nome;
	float m;
	
	printf("Digite o seu nome: \n");
	scanf("%s",&nome);
	
	printf("digite a primeira nota: \n");
	scanf("%d",&n1);
	
	printf("digite a sugunda nota: \n");
	scanf("%d",&n2);
	
	printf("digite a terceira nota: \n");
	scanf("%d",&n3);
	
	m = 3/(1/n1 + 1/n2 + 1/n3);
	
	// professor aqui não consegui fazer com que mostrasse essa ultima parte :(
	
	printf("Aluno: %s\n",nome);
	printf("Média aritmética é: %.2f\n",m);


}
