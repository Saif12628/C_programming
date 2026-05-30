/*
input: 5

output:
* ^ ^ ^ ^ 
* * ^ ^ ^ 
* * * ^ ^ 
* * * * ^ 
* * * * * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int row, col, space, total;
    printf("Enter the Number: ");
    scanf("%d", &total);

    for(row = 1; row <= total; row++){
        /*for(col = 1; col <= total; col++){
            if(col <= row){ 
                printf("* ");
            }else{
                printf("^ ");
            }
        }*/
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        for(space = total-1; space >= row; space--){
            printf("^ ");
        }
        printf("\n");
    }

    return 0;
}