#include<stdio.h>
//#include<locale.h>



int main(void){
    int i;
    char nome[8] = "glaudson";

    for(i=0;i<10;i++){
        //setlocale(LC_ALL, "portuguese");
        //printf("willian");
        printf("%s \n", i, nome[i]);
    }
}
