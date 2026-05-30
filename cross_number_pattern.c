/*
inputt: 5
output: 
1               1 
  2           2 
    3       3 
      4   4 
        5 
      4   4 
    3       3 
  2           2 
1               1 
*/
//-------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int r, c, s, n, t;
    printf("Enter a number: ");
    scanf("%d", &t);

    for(r = t, n = 1; r >= 2; r--, n++){
        for(s = t-1; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r*2-1; c++){
            if(c == 1|| c == r*2-1){
                printf("%d ", n);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(r = 1, n = t; r <= t; r++, n--){
        for(s = t-1; s >= r; s--){
            printf("  ");
        }
        for(c = 1; c <= r*2-1; c++){
            if(c == 1|| c == r*2-1){
                printf("%d ", n);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}