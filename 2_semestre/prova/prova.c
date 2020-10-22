#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int areaQuadrado(){
    
    float base,altura,area;

    printf("Digite a base: \n");
    scanf("%f",&base);
    printf("Digite a altura: \n");
    scanf("%f",&altura);

    area = base * altura;
    
    printf("A área do quadrado é: %.2f \n",area);
}

int areaCirculo(){

    float raio,area;

    printf("Digite o raio: \n");
    scanf("%f",&raio);

    area = M_PI * pow(raio,2);

    printf("A área do circulo é: %.2f \n",area);
}

int areaTrapezio(){

    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: \n");
    scanf("%f",&baseMaior);
    printf("Digite a altura: \n");
    scanf("%f",&altura);
    printf("Digite a base menor: \n");
    scanf("%f",&baseMenor);

    area = ((baseMenor + baseMaior)* altura)/2;

    printf("A área do trapézio é: %.2f \n",area);
}

int tabuadaMultiplicacao(){
    
    int i,num;

    printf("Digite o número desejado: \n");
    scanf("%i",&num);
    printf("Tabuada do %i: \n",num);

    for (i = 1; i <= 10; i++){
        printf("%i * %i = %i\n",num,i,num*i);           
    }
}

int tabuadaPotencia(){

    int i,num;

    printf("Digite o número desejado: \n");
    scanf("%i",&num);
    printf("Tabuada do %i: \n",num);

    for (i = 1; i <= 10; i++){
        int r = pow(num,i);
        printf("%i ˆ %i = %i \n",num,i,r);        
    }    
}

int geradorAleadorio(){
    
    int i;
    srand(time(NULL));

    printf("Gerador de numeros aleatorios: \n");
    for (i = 0; i < 6; i++){
        printf("numero: %d \n", rand() % 60);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int escolha;

    printf("                     MENU                    \n");
    printf("-----------------------------------------------\n");
    printf("1 - Cálculo Área Quadrado\n");
    printf("2 - Cálculo Área Circulo\n");
    printf("3 - Cálculo Área Trapézio\n");
    printf("4 - Cálculo da Tabuada - Multiplicação\n");
    printf("5 - Cálculo da Tabuada - Potência\n");
    printf("6 - Gerador de números (Aleatórios) para Quina\n");
    scanf("%i",&escolha);


    switch (escolha){
        case 1:
            areaQuadrado();
            break;
        
        case 2:
            areaCirculo();
            break;

        case 3:
            areaTrapezio();
            break;

        case 4:
            tabuadaMultiplicacao();
            break;

        case 5:
            tabuadaPotencia();
            break;
        
        case 6:
            geradorAleadorio();
            break;
    }

}