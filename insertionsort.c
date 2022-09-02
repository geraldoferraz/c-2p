#include <stdio.h>
#include <stdlib.h>
#define len 6
int main (){
    int vetor[len] = {4,6,9,2,4,3};

    for(int i = 0; i<len ; i++){
        int j =i;
        while ((vetor[j]< vetor[j-1])&& j>0){
            int aux = vetor[j-1];
            vetor[j-1] = vetor[j];
            vetor[j] = aux ; 
            --j; 
        }
    }
    for (int i = 0 ;i<len;i++){
        
    }

}