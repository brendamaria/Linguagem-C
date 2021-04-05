#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
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
/**************************************/
int main(){
setlocale(LC_ALL, "portuguese");
int option;
 

MENU:
    system("cls");
    
    printf("\             menu \n");
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
        del_empregado_nome();
        break;
    case 6:
         exit(-1);
        break;
    default:
        printf("\nNenhuma opção escolhida");
        break;
    }
    getch();
    goto MENU;
getch();
return 0;
}



// ***************   inicio    configuração chamada ARQuivo   *****************

FILE* AbrirArq(){ 
FILE *fptr;
/**
veja se o arquivo já está presente ou não
-> se já estiver presente, abra-o em      "r + b": lê e escreve no arquivo
-> Não use o modo "a + b" porque você não será capaz de modificar os registros anteriores
-> Caso contrário, abra o arquivo em  "w + b": um novo arquivo é criado se não for encontrado
    para ler e escrever, removendo todos os conteúdos anteriores.
**/
 
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

// ***************   FIM configuração da abertura de    *****************






// ***************   INÍCIO  configuração função cadastrar empregdo *****************
void cadastrar(){
system("cls");///  LIMPA TELA
empregado e;
FILE *fptr = AbrirArq();    ///chame a função para abrir o arquivo
if(fptr == NULL){
    exit(-1);
}
printf("\n Nome: ");
fflush(stdin);
gets(e.nome);
printf("\nIdade: ");
scanf("%d", &e.idade);
printf("\nSalário: ");
scanf("%f", &e.salario);
fseek(fptr, 0, 2);
if(fwrite(&e, sizeof(e), 1,fptr )==1){
    printf("\nEmpregado gravado no disco ... Pressione qualquer tecla para continuar..");
}
fclose(fptr);
}

// ***************   FIM    configuração função ADICIONAR empregdo    *****************









 

// ***************   INICIO    configuração função LISTAR empregdo    *****************
void listar_empregados(){

system("cls");      ///Limpando a tela
empregado e;
int registros = 0;

FILE *fptr = AbrirArq();      ///abrindo arquivo
if(fptr == NULL){
    exit(-1);
}
printf("\nNome\t\tIdade\t\tSalário");
printf("\n***********************************************\n");
while(fread(&e, sizeof(e),1,fptr)==1){
    registros = 1;
    printf("%s\t\t%d\t\t%.3f\n", e.nome, e.idade, e.salario);
    printf("_____________________________________________\n");
}
if(registros == 0){
    printf("\n Não há registros ... Pressione qualquer tecla para continuar.");
}

fclose(fptr);         ///Fechando arquivo
}                     
// ***************   FIM    configuração função LISTAR vempregdo    *****************








// ***************   INÍCIO    configuração função EDITAR empregdo    *****************
void edit_empregado_nome(){
system("cls");
empregado e;
char consnome[50];
int recordNo =0, encontrou = 0;
FILE *fptr = AbrirArq();
if(fptr == NULL ){
    printf("\nDesculpe modificação falhada...");
    exit(-1);
}
printf("\nEntre com nome do empregado:\t");
fflush(stdin);         					//fflush(stdin) é usado para limpar o buffer do teclado!
gets(consnome);
while(fread(&e, sizeof(e), 1, fptr) == 1){   /* Fread() - A função retorna o número de unidades efetivamente lidas. 
                                             Este número pode ser menor que count quando o fim do arquivo 
											for encontrado ou ocorrer algum erro. Quando o arquivo for aberto 
											para dados binários, fread pode ler qualquer tipo de dados.*/
          									///pesquisa com distinção entre maiúsculas e minúsculas
if(strcmp(consnome, e.nome) == 0){
encontrou = 1; 
printf("\nEntre com salário: ");     ///  a mesma lógica pode ser usada para alterar a idade e também o nome completofpt
scanf("%f", &e.salario);
fseek(fptr, sizeof(e)*recordNo, 0);   /// leva o ponteiro do arquivo para o registro que precisa ser modificado
if(fwrite(&e, sizeof(e), 1, fptr)==1){         /// leva o ponteiro do arquivo para o próximo registro
    fseek(fptr, sizeof(e)*(recordNo+1), 0);      /* A função fseek() nos permite realizar operações de leitura e 
	                                              escrita em arquivos de forma randômica.  */ 
}
}
recordNo++;
}
if(encontrou == 1){
    printf("\nDados modificados com sucesso... Pressione qualquer tecla");
}else{
printf("\nNenhuma correspondência dados encontrada .. Pressione qualquer tecla para continuar");
}
fclose(fptr);  //   FEcha o ponteiro indicando arquivo a ser fechado
 
} 

// ***************   FIM    configuração função EDITAR empregdo    *****************








// ***************   INICIO    configuração função DELETAR empregdo    *****************
void del_empregado_nome(){
system("cls");
empregado e;
FILE *fptr, *fptr2;
char consnome[50];
fptr = AbrirArq();
fptr2 = fopen("tmp.bin", "w+b");
if(fptr2 == NULL || fptr == NULL){
    printf("\n Não foi possível abrir o arquivo...");
    exit(-1);
}
printf("\nEntre com nome do empregado:\t");
fflush(stdin);
gets(consnome);
while(fread(&e, sizeof(e), 1, fptr) == 1){
         
    if(strcasecmp(e.nome,consnome ) != 0){     //Strcasecmp serve para comparar o conteúdo de duas  strings
        fwrite(&e, sizeof(e), 1, fptr2);      //A função fwrite() funciona como a sua companheira fread(), porém escrevendo no arquivo.
        printf("\n Gravando .... no arquivo temporário ...!!!");
    }
    }
///Fecha arquivo
if(fclose(fptr) == 0)
printf("\nArquivo original fechado...");
if(fclose(fptr2) == 0)
printf("\nArquivo temporário fechado.");

if(remove("emp.bin")==0){                    //Remove arquivo 
        
    printf("\nArquivo Original removido..");
}else{
 printf("\nArquivo Original não foi removido..");
}

if(rename("tmp.bin", "emp.bin")==0){      ///renomeia arquito tmp
      printf("\nArquivo temporário renomeado ... Pressione qualquer tecla para continuar");
}else{
printf("\nArquivo temporário Não foi renomeado ... Pressione qualquer tecla para continuar...");
}
} 
// ***************   FIM    configuração função DELETAR empregdo    *****************








// ***************   INICIO    configuração função CONSULTAR empregdo    *****************
 
void Listar_empregado_nome(){
  
system("cls");
empregado e;
char consnome[50];
int  encontrou = 0;
FILE *fptr = AbrirArq();
if(fptr == NULL ){
    printf("\n Arquivo não pode ser aberto...");
    exit(-1);
}
printf("\nEntre com nome do empregado: \t");
fflush(stdin);
gets(consnome);
printf("\nNome\t\tIdade\tSalário");
printf("\n***********************************************\n");
while(fread(&e, sizeof(e),1,fptr)==1){
   
    if(strcasecmp(e.nome,consnome) == 0){    ///compara   string´s
    encontrou = 1;
   printf("%s\t%d\t\t%.3f\n", e.nome, e.idade, e.salario);
   printf("_____________________________________________");
    }
}
if(encontrou == 0){
    printf("\n    registro não foi encontrado pressione QQ tecla");
}fclose(fptr);
} 

// ***************   FIM    configuração função DELETAR empregdo    *****************