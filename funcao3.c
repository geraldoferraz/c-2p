#include <stdio.h>


int main (){
    float a =4 , b =3.7 , c= 8;

    comparacao(a,b,c);

    return 0 ;
}
void comparacao (float v1 , float v2 , float v3){
    float res = v1 + v2 ;
    if(res > c){
        printf("a + b é maior que c");
    }
    else if(res < c){
        printf("a+b e menor que c")};

}