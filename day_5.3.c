/*
input: 5
output: 
A 
A B 
A B C 
A B C D 
A B C D E 

A 
B B 
C C C 
D D D D 
E E E E E 

F 
E E 
D D D 
C C C C 
B B B B B 

A 
B C 
D E F 
G H I J 
K L M N O 
*/
//
#include <stdio.h>

int main(){

    int r, c, t, ch;

    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = 1; r <= t; r++){
        for(c = 1, ch = 65; c <= r; c++, ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");
    for(r = 1, ch = 65; r <= t; r++, ch++){
        for(c = 1; c <= r; c++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");
    for(r = 1, ch = 65 + t; r <= t; r++, ch --){
        for(c = 1; c <= r; c++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");
    for(r = 1, ch = 65; r <= t; r++){
        for(c = 1; c <= r; c++, ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}