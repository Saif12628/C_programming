/*
input: 5

output:
* * * * * 
^ * * * * 
^ ^ * * * 
^ ^ ^ * * 
^ ^ ^ ^ * 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int x, y, s, i;
    printf("Enter a number: ");
    scanf("%d", &i);

    for(x = 1; x <= i; x++){
        for(s = 2; s <= x; s++){
            printf("^ ");
        }
        for(y = i; y >= x; y--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}