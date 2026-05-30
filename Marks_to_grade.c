#include <stdio.h>

int main(){

    int mark = 0;

    printf("Enter mark: \n");
    scanf("%d", &mark);

    if(mark >= 0 && mark <= 32){
        printf("Grade is F\n");
    }
    else if(mark >= 33 && mark <= 39){
        printf("Grade is D\n");
    }
    else if(mark >= 40 && mark <= 49){
        printf("Grade is C\n");
    }
    else if(mark >= 50 && mark <= 59){
        printf("Grade is B\n");
    }
    else if(mark >= 60 && mark <= 69){
        printf("Grade is A-\n");
    }
    else if(mark >= 70 && mark <= 79){
        printf("Grade is A\n");
    }
    else if(mark >= 80 && mark <= 100){
        printf("Grade is A+\n");
    }
    else{
        printf("invalid input!");
    }

    return 0;
}