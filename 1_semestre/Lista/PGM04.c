#include <stdio.h>
#include <locale.h>

int main(void){

	
	int n1;
	int n2;
	int n3;
	char nome[20];
	float media;
	
	printf("Digite o seu nome: \n");
	scanf("%s",&nome);
	
	printf("digite a primeira nota: \n");
	scanf("%d",&n1);
	
	printf("digite a sugunda nota: \n");
	scanf("%d",&n2);
	
	printf("digite a terceira nota: \n");
	scanf("%d",&n3);
	
	media = (n1+n2+n3)/3;
	
	// professor n�o consegui fazer rodar o if :(
	
	if(media>7.5){
		printf("Aluno, %s",nome," Aprovado");
	}else{
		printf("Aluno, %s",nome," Reprovado");
	}
}
