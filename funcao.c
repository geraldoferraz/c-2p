#include <stdio.h>

int soma (int a , int b);
int main (){
int valor1 = 5 ,valor2 = 3 , calculo ;

calculo= soma (valor1,valor2);
printf(" o resultado dos 2 valores e %d :", calculo);

}

int soma (int a , int b){
int res;
res = a + b;
return res ;
}
