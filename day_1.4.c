#include <stdio.h>

int main(){

    float num1, num2;
    char operator; // Note: 'operator' is fine in C, but it's a reserved keyword in C++!

    printf("Enter an Operator: \n");
    printf("(+) to do Summetion\n");
    printf("(-) to do Subtraction\n");
    printf("(*) to do Multiplaction\n");
    printf("(/) to do Divetion\n");
    
    scanf(" %c", &operator); 

    printf("Enter the numbers: \n");
    scanf("%f%f", &num1, &num2);

    switch(operator){
        case '+':
            printf("Summetion is %.2f\n", num1 + num2);
        break;
        case '-':
            printf("Subtraction is %.2f\n", num1 - num2);
        break;
        case '*':
            printf("Multiplaction is %.2f\n", num1 * num2);
        break;
        case '/':
            if(num2 != 0){
                printf("Divetion is %.2f\n", num1 / num2);
            } 
            else{
                printf("Error: Cannot divide by zero!\n");
            }
        break;
        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}