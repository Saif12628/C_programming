/*
input: 5

output: 
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, i;
    printf("Enter a number: ");
    scanf("%d", &i);

    for(r = 1; r <= i; r++){
        for(c = 1; c <= r; c++){
            printf("* ");
        }
        printf("\n");
    }
    for(r = 1; r <= i; r++){
        for(c = i-1; c >= r; c--){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}