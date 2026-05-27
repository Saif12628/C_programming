#include <stdio.h>

int main(){

    int num1, counter = 0;
    printf("enter an integer: ");
    scanf("%d", &num1);

    while(num1 != 0){
        num1 /= 10;
        counter++;
    }

    printf("Total digits: %d\n", counter);
    return 0;
}