// geraldo ferraz de sa neto --> 2 periodo 

#include <stdio.h>


int main (){

    int i , n , soma_gramas = 0 ;
    float valor =0 , total=0 ;

    printf("digite aqui a quantidade de itens que voce deseja :");
    scanf("%i", &n);

    float matriz [n][2];

    for (i= 0 ;i<n;i++){
        printf("digite aqui o valor do produto a cada 100g :");
        scanf("%f",&matriz[i][0]);
        printf("insira agora a quantidade de gramas que voce deseja :");
        scanf("%f" ,&matriz[i][1]);
        soma_gramas = soma_gramas + matriz[i][1]; 
        } 
    
    for (i= 0 ;i<n;i++){

       valor = matriz[i][0]* matriz[i][1]/100 ; 
       total = total + valor ;
    }

    printf("o valor total e igual a : %f\n", total );
    printf("esse e o total de gramas obtidas : %i\n", soma_gramas);
    return 0 ;
}


    
    






