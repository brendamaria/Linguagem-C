/** 
Autor:Alunos FACDF
Data: 19/11/2020
Ultima atualização: 26/11/2020   21h22:00
DESCRIÇÃO: 
Este programa adiciona registros de Empregados, edita-os pelo nome do funcionário e os exclui.
Obs.: Apenas mudança de salário é aceitável. por enquanto, rsssssss
**/
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
//#include<dos.h>
#include<locale.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
}empregado;

void cadastrar();
void listar_empregados();
void Listar_empregado_nome();
void edit_empregado_nome();
void del_empregado_nome();
FILE* AbrirArq();
/**************/
int main(){

setlocale(LC_ALL, "portuguese");
int option;
 
MENU:
    system("cls");
    
    printf("\n             menu \n");
    printf("\n1. Cadastrar empregado\n");
    printf("\n2. Visualizar empregado\n");
    printf("\n3. Editar empregado\n");
    printf("\n4. Consulta empregado\n");
    printf("\n5. Excluir empregado\n");
    printf("\n6. Sair\n");
    printf("\nEscolha uma das opções menu : \t");
   
    scanf("%d", &option);
    switch(option){
    case 1:
        cadastrar();
        break;
    case 2:
        listar_empregados();
        break;
    case 3:
        edit_empregado_nome();
        break;
    case 4:
        Listar_empregado_nome();
        break;
    case 5:
       // del_empregado_nome();
        break;
    case 6:
         exit(-1);
        break;
    default:
        printf("\n Nenhuma opção escolhida");
        break;
    }
    //getch();   
    goto MENU;    
//getch();
return 0; 
}



// *****   inicio    configuração chamada ARQuivo   *******

FILE* AbrirArq(){ //
FILE *fptr;
 
fptr = fopen("emp.bin", "r+b");        // opção : "r + b": lê e escreve no arquivo
if(fptr == NULL){
    printf("\n Arquivo não encontrado ..... tentando criar um");
    fptr = fopen("emp.bin", "w+b");   //opção "w + b": um novo arquivo é criado se não for encontrado
        if(fptr == NULL){
         printf("\n Arquivo não encontrado ... a tentativa de criar um também falhou...");
         return NULL;
        }else{
          return fptr;
        }
}else{

return fptr;
}
 
} 


// *****   INÍCIO  configuração função cadastrar empregdo *******
void cadastrar(){
system("cls");///  LIMPA TELA
empregado e;
FILE *fptr = AbrirArq();    ///chame a função para abrir o arquivo
if(fptr == NULL){
    exit(-1);
}
printf("\n Nome: ");
fflush(stdin); // usando para limpar o buffer  do teclado
gets(e.nome);
printf("\nIdade: ");
scanf("%d", &e.idade);
printf("\nSalário: ");
scanf("%f", &e.salario);
fseek(fptr, 0, 2);   // deslocamento para o ponteiro  de abertura do arquivo
if(fwrite(&e, sizeof(e), 1,fptr )==1){
    printf("\nEmpregado gravado no disco ... Pressione qualquer tecla para continuar..");
}
fclose(fptr);
}

// *****   FIM    configuração função ADICIONAR empregdo    *******



// *****   INÍCIO  configuração função Listar empregdo *******
void listar_empregados(){
system("cls");    // Limpar tela
empregado e;
int registros = 0;

FILE *fptr = AbrirArq(); // Abrir arquivo
if (fptr == NULL){
	exit(-1);
}	

printf("\nNome\t\tIdade \t\t\t Salário");
printf("\n");
while(fread(&e,sizeof(e), 1, fptr)==1){    // fread - Ler arquivo  através do ponteiro  
	registros = 1;
	printf("%s\t\t%d\t\t\t %.2f",e.nome,e.idade,e.salario);
	printf("\n");
}
if(registros == 0){
	printf("Não há registros no arquivo .... pressione qualquer tecla para continuar!");
		
}
fclose(fptr);   //fechar o arq	
}
// *****   FIM  configuração função cadastrar empregdo *******


// *****   INÍCIO  configuração função EDITAR empregdo *******
void edit_empregado_nome(){
system("cls");    // Limpar tela
empregado e;
char consnome[50];
int recordNo=0,encontrou=0;

FILE *fptr = AbrirArq(); // Abrir arquivo
if (fptr == NULL){
	printf("erro na modificação");
	exit(-1);
}	

printf("\n Entre com nome do empregado ");
fflush(stdin);	
gets(consnome);

while(fread(&e,sizeof(e), 1, fptr)==1){
if(strcmp(consnome,e.nome)==0){
encontrou=1;
printf("\n Entre com salário :  ");
scanf("%f",&e.salario);
fseek(fptr,sizeof(e)*recordNo,0); //leva o ponteiro do arquivo para o primeiro registro a ser modificado
if(fwrite(&e,sizeof(e), 1,fptr)==1){
   fseek(fptr,sizeof(e)*(recordNo+1),0);   	
}	 	
}	
recordNo++;
}

if(encontrou ==1){
  printf("\n Dados alterados com sucesso!!!!!");		
}else{
	printf("\n Dados não encontrados!!!!!");
}
fclose(fptr);     // Fecha arquivo
}
// *****   FIM  configuração função EDITAR empregdo *******

//****************************

void Listar_empregado_nome(){
system("cls");    // Limpar tela
empregado e;
char nome[10];
int registros = 0;

FILE *fptr = AbrirArq(); // Abrir arquivo
if (fptr == NULL){
	exit(-1);
}		

	printf("Digite o nome do empregado: ");
	fflush(stdin); // limpar teclado
	gets(nome);
	
while(fread(&e, sizeof(e), 1, fptr) == 1){

    if(strcasecmp(e.nome, nome) == 0){
    registros = 1;
	printf("%s\t\t%d\t\t\t %.2f",e.nome,e.idade,e.salario);	
    
	}

}
if(registros == 0){
	printf("Não há registros no arquivo .... pressione qualquer tecla para continuar!");
		
}	
fclose(fptr);	
}