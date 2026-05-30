/*
input: 5

output:
* * * * * 
* * * * ^ 
* * * ^ ^ 
* * ^ ^ ^ 
* ^ ^ ^ ^ 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int x, y, s, i;
    printf("Enter a Number: ");
    scanf("%d", &i);

    for(x = i; x >= 1; x--){
        for(y = i; y >= (i-x)+1; y--){
            printf("* ");
        }
        for(s = 2; s <= (i-x)+1; s++){
            printf("^ ");
        }
    printf("\n");
    }

    return 0;
}