#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto,salarioLiquido,taxa;
    
    printf("Digite seu salario bruto: \n");
    scanf("%f",&salarioBruto);
    
    if(salarioBruto < 1000){
        taxa = salarioBruto * 0.05;
        salarioLiquido = salarioBruto - taxa;
        printf("A taxa a pagar é: %.2f, seu salario é: %.2f \n",taxa,salarioLiquido);
    }
    
    if(salarioBruto >= 1000 && salarioBruto < 5000){
        taxa = salarioBruto * 0.11;
        salarioLiquido = salarioBruto - taxa;
        printf("A taxa a pagar é: %.2f, seu salario é: %.2f \n",taxa,salarioLiquido);
    }
    
    if(salarioBruto >= 5000){
        taxa = salarioBruto * 0.30;
        salarioLiquido = salarioBruto - taxa;
        printf("A taxa a pagar é: %.2f, seu salario é: %.2f \n",taxa,salarioLiquido);
    }
}
