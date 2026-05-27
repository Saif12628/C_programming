#include <stdio.h>

int main(){

    int row, col, total, space = 0;

    printf("Enter the number of rows and columns for the inverted half right triangle pyramid: ");
    scanf("%d", &total);

    for(row =1; row <=total; row ++){
        for(space = 1; space < row; space++){
            printf("  ");
        }
        for(col = row; col <= total; col++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}