#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 3

int main ()
{

    int matriz[lin][col] = {{12,44,55} , {33,56,109}};
    int i,j;

    for (i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%i\t", matriz[lin][col]);

    }
        printf("\n");
}
    return 0;
}