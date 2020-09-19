#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

    int n[3],i;

    for (i=0;i < 3; i++){
        printf("Digite o %d número: ",i + 1);
        scanf("%d",&n[i]);
    }        
    
    if(n[0] > n[1] && n[0] > n[2]){
        printf("o numero maior é: %d\n",n[0]);
    } else {
        if (n[1] > n[2]) {
            printf("o numero maior é: %d\n",n[1]);
        } else{
            printf("o numero maior é: %d\n",n[2]);
        }   
    }
    
    

}