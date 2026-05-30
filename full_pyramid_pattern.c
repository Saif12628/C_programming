#include <stdio.h>

int main(){

    int row, col, total, space;

    printf("Enter the Number of rows for the triangle pyramid: ");
    scanf("%d", &total);

    for(row = 1; row <= total; row++){
        for(space = total - 1; space >= row; space--){
            printf("  ");
        }
        for(col = 1; col <= (row*2)-1; col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}