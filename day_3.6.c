/*
input: 5

output:   
        * 
      * * * 
    * * * * * 
  * * * * * * * 
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
        for(space = total - 1; space >= row; space--){
            printf("  ");
        }
        for(col = 1; col <= row*2-1; col++){
            printf("* ");
        }
        printf("\n");
    }
    for(row = total- 1; row >= 1; row--){
        printf("  ");
        for(space = total - 2; space >= row; space--){
            printf("  ");
        }
        for(col = 1; col <= row*2-1; col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}