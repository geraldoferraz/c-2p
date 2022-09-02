#include <stdio.h>
#include <stdlib.h>

int main (){
    int vetor[13];
    int s,i,j;
    int maior_num, menor_num, num_meio ; 
    int count_maior = 0, count_menor = 0; 
    
    
    for(i=0;i<13;i++){
      printf("digite aqui os numeros para serem adicionados a esse vetor : ");
      scanf("%i" , &s);
      vetor[i] = s ;
    }

    for(int i =0; i < 13; i++){
      int j = i;
      while((vetor[j] < vetor[j-1]) && j > 0){
      int aux = vetor[j-1];
      vetor[j-1] = vetor[j];
      vetor[j] = aux;
       --j;
      }
    }
    
    printf ("\n ordenando os numeros na ordem crescente \n");
    
    for(int i = 0; i < 13 ; i++){  
      printf("%.2i \t", vetor[i]);
    }
    maior_num = vetor[12];
    menor_num = vetor[0];
    num_meio = vetor[6] ; 

    for(i = 0; i < 13; i++){
      if(maior_num == vetor[i]) count_maior++;
      if(menor_num == vetor[i]) count_menor++;    
    }
  
    printf("\nesse e o maior numero presente no vetor e a quantidade de vezes que ele aparece : %i %i \n" , maior_num , count_maior);
    printf("\nesse e o menor numero presente no vetor e a quantidade de vezes que ele aparece : %i %i \n" , menor_num , count_menor);
    printf("\nesse e o numero que fica no centro do vetor : %i \n" , num_meio );

}