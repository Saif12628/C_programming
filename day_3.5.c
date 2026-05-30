/*
input: 5

output:
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int row, col, total, space;

    printf("Enter a Number: ");
    scanf("%d", &total);

    for(row = 1; row <= total; row++){
        for(space = 1; space <= row-1; space++){
            printf("  ");
        }
        for(col = 1; col<= (total-row+1)*2-1; col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}