#include <stdio.h>

int main(){

    char ltr;
    printf("Enter a letter: ");
    scanf("%c", &ltr);

    if(!(ltr >= 'a' && ltr <= 'z') && !(ltr >= 'A' && ltr <= 'Z')) {
        printf("Not a letter.\n");
    } else{
        switch(ltr) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Vowel.\n");
            break;
            default:
                printf("Consonant.\n");
        }
    }

    return 0;
}