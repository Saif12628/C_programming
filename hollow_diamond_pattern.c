/*
input: 5
out put:
          * 
        *   * 
      *       * 
    *           * 
  *               * 
    *           * 
      *       * 
        *   * 
          * 
*/
//-----------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, s, t;

    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = 1; r <= t; r++){
        for(s = t; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r*2-1; c++){
            if(c == 1 || c == r*2-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(r = t - 1; r >= 1; r--){
        for(s = t; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r*2-1; c++){
            if(c == 1 || c == r*2-1 || r == t){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}