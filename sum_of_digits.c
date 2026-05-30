#include <stdio.h>

int main(){

    int num1, num2= 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    while(num1 != 0){
        num2 = num1 % 10;
        sum = sum + num2;
        num1 = num1 / 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}