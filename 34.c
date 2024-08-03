/*

Program to print pattern

   *
  ***
 *****
*******

*/


#include <stdio.h>

int main() {
    int i, j, s;

    for (int i = 1; i <= 4 ; i++) {   //for rows
        for (s = 1; s <= 4 - i; s++) { // for spacing
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // for columns
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
