#include <stdio.h>

int main(){

     int range, i = 1, counter = 0;

    printf("Enter the range: ");
    scanf("%d", &range);

    while(i <= (range/2)){
        printf("%d ", (2*i)-1);
        i++;
        counter++;
    }

    printf("\nTotal numbers printed: %d\n", counter);
    return 0;
}