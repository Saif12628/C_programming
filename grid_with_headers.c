/*
input: 5

output:
0 1 2 3 4 5 
1 * * * * * 
2 * * * * * 
3 * * * * * 
4 * * * * * 
5 * * * * * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int col, row, total;
    printf("Enter a number: ");
    scanf("%d", &total);

    for(row = 0; row <= total; row++){
        printf("%d ", row);
        for(col = 1; col <= total; col++){
            if(row == 0){
                    printf("%d ", col);
                
            }else{
                printf("* ");
            }        
        }
        printf("\n");
    }
    return 0;
}