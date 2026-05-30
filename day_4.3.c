/*
input: 5

output: 
        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, s, t;

    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = 1; r <= t; r++){
        for(s = t-1; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r*2-1; c++){
            if(c == 1 || c == r*2-1 || r == t){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}