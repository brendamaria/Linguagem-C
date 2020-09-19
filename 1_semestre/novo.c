#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int salarioFixo;
    char nome;
    float comissao;
    int salarioRecebido;

    printf("digite o nome do vendedor: \n");
    scanf("%s",&nome);

    printf("Digite o salario do vendedor: \n");
    scanf("%i",&salarioFixo);

    comissao = comissao*salarioFixo;

    salarioRecebido = comissao+salarioFixo;

    printf("O Funcionário: %s\n",nome);
    printf("tem salario fixo de: %d\n",salarioFixo);
    printf("\n seu salario final este mes é de: %d\n",salarioRecebido);

}