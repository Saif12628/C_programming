/*
input: 5
output:
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, s, n, t;
    
    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = 1; r <= t; r++){
        for(c = 1, n = 1; c <= r; c++, n++){
            printf("%d ", n);
        }
        for(s = 1; s <= t*2-r*2; s++){
            printf("  ");
        }
        for(c = 1, n = r; c <= r; c++, n--){
            printf("%d ", n);
        }
        printf("\n");
    }
}   