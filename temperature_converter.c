#include <stdio.h>

int main(){

    char choice;
    float temp = 0;

    printf("Which calculation do you want to perform?\n");
    printf("1.Celsius to Fahreheit. Press F\n");
    printf("2.Fahreheit to Celsius. Press C\n");
    scanf("%c", &choice);

    if(choice == 'c' || choice == 'C'){
        printf("Temperature in Fahreheit: ");
        scanf("%f", &temp);

        printf("Celsius: %f\n", (temp - 32) * 5/9);
    }
    else if(choice == 'f' || choice == 'F'){
        printf("Temperature in Celsius: ");
        scanf("%f", &temp);

        printf("Fahreheit: %f\n", (temp * 9/5) + 32);
    }
    else{
        printf("Invalid input!\n");
    }

    return 0;
}