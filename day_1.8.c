#include <stdio.h>

int main(){

    int i, j, k;

    for(i = 1, j = 1, k = 1; i <= 20, j <= 20, k <= 15; i++, j=j+2, k=k+3){
        printf("i = %d, j = %d, k = %d\n", i, j, k);
    }

    return 0; 
}