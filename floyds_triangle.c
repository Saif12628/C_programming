/*
input: 5
output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, n, t;
    
    printf("Enter a numer: ");
    scanf("%d", &t);

    for(r = 1, n = 1; r <= t; r++){
        for(c = 1; c <= r; c++,  n++){
            printf("%d ", n);
        }
        printf("\n");
    }

    return 0;
}