#include <stdio.h>

int main(){

    int row, col, total, space = 0;
    char spacechar = ' ';

    printf("Enter the number of rows and columns for the inverted half right triangle pyramid: ");
    scanf("%d", &total);

    for(row =1; row <=total; row ++){
        for(col = total; col >= row; col --){
            printf("* ");
            space++;
        }
        printf("\n");
        printf("%c", spacechar*space);
        
    }
    
    return 0;
}