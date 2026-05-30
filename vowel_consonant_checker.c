#include <stdio.h>

int main(){

    char ltr;

    printf("Enter an alphabet: ");
    scanf("%c", &ltr);

    if (!(ltr >= 'a' && ltr <= 'z') && !(ltr >= 'A' && ltr <= 'Z')){
        printf("%c is not an alphabet.\n", ltr);
    }
    else if(ltr == 'a' || ltr == 'e' || ltr == 'i' || ltr == 'o' || ltr == 'u' ||
            ltr == 'A' || ltr == 'E' || ltr == 'I' || ltr == 'O' || ltr == 'U'){
        printf("%c is a vowel.\n", ltr);
    }
    else{
        printf("%c is a consonant.\n", ltr);
    }

    return 0;
}