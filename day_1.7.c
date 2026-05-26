#include <stdio.h>

int main(){

    int number, totalitarations;

    printf("Enter the number of iterations: ");
    scanf("%d", &totalitarations);

    for(number = 1; number <= totalitarations; number++){
        printf("%d Hello World\n", number);
    } 

    return 0;
}