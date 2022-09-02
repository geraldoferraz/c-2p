#include <stdio.h>
#include <stdlib.h>
#define len 7 
int main (){
    int qnt ; 
    int i;
    float s ;
    float salario[len]; 
    
    for (i = 0; i<len ;i++){
    printf("indique aqui o seu salario :");
    scanf("%f" , &s);
    salario[i] = s ;
    }

    for(int i =0; i < len; i++){
    int j = i;
    while((salario[j] < salario[j-1]) && j > 0){
    int aux = salario[j-1];
    salario[j-1] = salario[j];
    salario[j] = aux;
     --j;
     }
 }
     printf ("\n representando na ordem crescente \n");
    for(int i = 0; i < len; i++){  
        printf("%.2f \t", salario[i]);
    }
 for(int i =0; i <len; i++){
    int j = i ;
    while((salario[j] > salario[j-1]) && j > 0){
    int aux = salario[j-1];
    salario[j-1] = salario[j];
    salario[j] = aux;
     --j;
     }
 }
    printf ("\n representando na ordem decrescente \n");
    for(int i = 0; i < len; i++){
        printf("%.2f \t", salario[i]);
   }
}
