#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(void){
	
int cont, esco,num;
		
setlocale(LC_ALL,"portuguese");
printf("Escolha uma operação");

printf("\n 1-Adição");	
printf("\n 2-Subtração");
printf("\n 3-Multiplicação");
printf("\n 4-Divisão ");	

printf("\nDigite sua escolha: ");
scanf("%d",&esco);

printf("\nEsolha um número: ");
scanf("%d",&num);

switch(esco){	
case 1:
		
for(cont=0;cont <=10; cont++)
printf("\n%d + %d= %d", num,cont,num+cont);
break;

case 2:
 
for(cont=0; cont <=10; cont++) 	
printf("\n%d-%d= %d", num,cont,num-cont);	
break;

case 3:
for(cont=0;cont <=10; cont++)	
printf("\n%d*%d= %d", num,cont,num*cont);
break;

case 4:
for(cont=0; cont<=10; cont++);
printf("\n%d/%d = %d", num,cont,num/cont);
break;
default:
printf("Número invalido");	
}
system("pause");
return 0;

}