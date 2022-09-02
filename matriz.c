#include <stdio.h>
#define lin 2 
#define col 3 

int main (void){
    int matriz [lin][col] ; 

for (int i = 0 ; i < lin ; i++)
    for(int j = 0 ; j < col ; j++){
        printf("digite o elemento aqui", i, j);
        scanf("%d" , &matriz[i][j]) ; 
    }
    for(int i = 0 ; i < lin ; i++){
        for(int j = 0 ; j < col ; j++)
            printf("%d \n" , matriz[i][j]);
    }
return 0 ;
}
