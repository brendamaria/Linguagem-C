#include <stdio.h>
#include <math.h>

int main(){
    
    int numF,horasTrabalhadas,filhos;
    float salarioFamilia,valorPorHora,totalSalario,totalSalarioFamilia,totalSalarioPorHora;

    printf("Digite seu número de funcionário: ");
    scanf("%i",&numF);

    printf("Digite suas horas trabalhadas: ");
    scanf("%i",&horasTrabalhadas);

    printf("Digite o valor que recebe por hora: ");
    scanf("%f",&valorPorHora);

    printf("Digite a quantidade de filhos com menos de 14: ");
    scanf("%i",&filhos);

    printf("Digite o valor do seu salário família: ");
    scanf("%f",&salarioFamilia);

    totalSalarioFamilia = salarioFamilia * filhos;

    totalSalarioPorHora = horasTrabalhadas * valorPorHora;

    totalSalario = totalSalarioFamilia + totalSalarioPorHora;

    printf("O salário total do funcionário número %i é: %0.2f \n",numF,totalSalario);


}