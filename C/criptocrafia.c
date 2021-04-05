#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int criptografar(){

    char palavra[15];
    int chave = 3,i;

    printf("Digite a palvra a ser criptografada: ");
    scanf("%s",&palavra);

    for (i = 0; i < strlen(palavra); i++){
        printf("%c",palavra[i] + chave);
    }
    printf("\n");

}

int descriptografar(){

    char palavra[15];
    int chave = 3,i;

    printf("Digite a palvra a ser descriptografada: ");
    scanf("%s",&palavra);

    for (i = 0; i < strlen(palavra); i++){
        printf("%c",palavra[i] - chave);
    }
    printf("\n");

}


int main(){

    setlocale(LC_ALL, "Portuguese");

    int menu;

    printf("                     MENU                    \n\n");
    printf("1 - Criptografar \n");
    printf("2 - Descriptografar \n");
    printf("Digite a sua opção: \n");
    scanf("%i",&menu);


    switch (menu)
    {
    case 1:
        criptografar();
        break;
    
    case 2:
        descriptografar();
        break;
    }
    

}