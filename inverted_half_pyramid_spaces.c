#include <stdio.h>

int main(){

    int row, col, total, space;

    printf("Enter the Number of rows and columns for the inverted half right triangle pyramid: ");
    scanf("%d", &total);

    for(row = 1; row <= total; row++){
        for(space = 2; space <= row; space++){
            printf("  ");
            }
        for(col = total; col >= row; col--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}