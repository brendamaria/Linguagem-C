#include <stdio.h>
#include <math.h>

int main(){
    int modo,meses,dias,anos,idade;
    int diasAno = 365, mesesAno = 12,diasMes = 30;

    printf("como deseja expressar sua idade? \n");
    printf("1-dias  2-meses  3-anos\n");
    scanf("%i",&modo);

    printf("digite sua idade: ");
    scanf("%i",&idade);

    switch (modo){
    case 1:
        dias = idade * diasAno;
        printf("Sua idade em dias é: %i \n",dias);
        break;
    case 2:
        dias = idade * diasMes;
        printf("Sua idade em dias é: %i \n",dias);
        break;
    case 3:
        dias = idade * diasAno;
        printf("Sua idade em dias é: %i \n",dias);
        break;
    }
}