#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<locale.h>

typedef struct {           
	int codigo;
    char nome[50];
    int cnpj;
    char endereco[50]; 
}fornecedor;    // O struct permite fazer um conjunto de difrentes variaveis

void cadastar_fornecedor();
void listar_fornecedores();
void consultar_fornecerdor();
void editar_fornecedor();
void delet_fornecedor();
FILE*AbrirArq();
/****************/

int main(){
	setlocale(LC_ALL,"portuguese");
	int option;

MENU:
  system("cls");
  
  printf("\n          MENU               \n");   //Menu para escolher o que se deseja
  printf("\n1-Cadastar Fornecedor");
  printf("\n2-Listar Fornecedores");
  printf("\n3-Consultar Fornecedor");
  printf("\n4-Editar Fornecedor");
  printf("\n5-Deletar Fornecedor");
  printf("\n6-Sair");
  
  printf("\n\nInforme sua escolha: ");
  scanf("%d",&option);
  
 switch(option ){
 	
 	case 1:
 	    cadastar_fornecedor();
 		break;
 	case 2:
 	    listar_fornecedores();
 	    break;
 	case 3:
	    consultar_fornecedor();    
	 	break;
	case 4: 
	   	editar_fornecedor();
	case 5:
	   	deletar_fornecedor();
	   	break;
	case 6:
	   	exit(-1)
	   	break;
 	default:
 		printf("Nemnhuma opção escolhida");
 		break;
    }
 	getch() //lê o caracetre do teclado que foi digitado
 	goto MENU;	
getch();
return 0;
 		
}
 	
// ** inicio configuração chamada arquivo **	

FILE* AbrirArq(){  // Associaçaõ de arquivo
FILE* forn; // Associação de arquivo

forn = fopen("emp.bin",r+b); //opção"r + b": lê e escreve no arquivo
if(forn = NULL){
	printf("Arquivo não encontrado.....Tentando criar um....aguarde");
	forn =fopne("emp.bin", w+b) //opção "w + b": um novo arquivo é criado se não for encontrado
	if(forn = NULL){
		printf("Arquivo não encontrado.....tentativa de criação malsucedida");
		return NULL
	}else{
		return forn;
	}
	
}else{

return forn;	
}		
}

//** fim chamada de arquivo **

// ** cadastro fornecedor **
void cadastrar(){
system("cls");
fornecedor f;
FILE *fptr = AbrirArq();
if(fptr == NULL){
    exit(-1);
}
printf("\n Nome: ");
fflush(stdin);
gets(f.nome);
printf("\n Cnpj: ");
scanf("%i", &f.cnpj);
printf("\n Endereço: ");
fflush(stdin);
gets(f.endereco);
fseek(fptr, 0, 2); 
if(fwrite(&f, sizeof(f), 1,fptr )==1){
    printf("\nEmpregado gravado no disco ... Pressione qualquer tecla para continuar..");
}
fclose(fptr);
}

// ** fim cadastro fornecedor **

