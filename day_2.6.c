#include <stdio.h>

int main(){

    int row, col, total;
    printf("Enter the number of rows and columns for the half pyramid: ");
    scanf("%d", &total);

    for(row=1; row<=total; row++){
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}