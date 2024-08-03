/*

basic for loopo in c 
Syntax :
for(start,end,step){
    block of code
}
 */

#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
