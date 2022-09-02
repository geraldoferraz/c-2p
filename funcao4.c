#include <stdio.h>


int main (){
    
    


    return 0;
}
char concatena (char *str1, char *str2){
    if(strcmp(str1,str2) != 0 ){     // strcmp compara as duas strings 
    strcpy(str1,str2);               //strcpy concatena s2 em s1
    return str1;


    }else{
        return "strings iguais" ; 
    }

}
