#include <stdio.h>

int main(){

    int range, i = 1;

    printf("Enter the range: ");
    scanf("%d", &range);

    while(i <= (range/2)){
        printf("%d ", (2*i));
        i++;
    }

    return 0;
}