#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
		
 	FILE*arquivo;
	arquivo = fopen("entrada.txt","r");
		
	if(arquivo == NULL)
	{
		printf(" erro ao abrir o arquivo!!! \n ");
	}
	printf(" Arquivo localizado!!!! \n ");
	
    int num;
	fscanf(arquivo,"%i",&num);
	printf("%i\n",num);

    char nome[15];
	fscanf(arquivo,"%s",&nome);
	printf("%s\n",nome); 
    //fclose(arquivo);
    //system("pause");
	//return 0;
}