/*
input: 5
output:
  * *       * * 
* * * *   * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
//------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int n, i, j;

    printf("input: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("output:\n");
    int w = 2 * n;

    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 2) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = w ; i >= 1; i -= 2) {
        for (j = w; j > i; j -= 2) {
            printf("  ");
        }
        for (j = 2; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}