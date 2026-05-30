/*
inputt: 5
output: 
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, s, n, t;
    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = t; r >= 2; r--){
        for(s = t-1; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r; c++){
            printf("* ");
        }
        printf("\n");
    }
    for(r = 1; r <= t; r++){
        for(s = t-1; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r; c++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}