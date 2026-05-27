#include <stdio.h>

int main(){

    int num, i;

    for(;;){
        printf("Enter an integer: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        for(i = 1; i <= 10; i++){
            printf("%2d x %2d = %2d\n", num, i, num * i);
        }
        printf("Enter 0 to exit.\n");
    }
    return 0;
}