
/*Fibonacci series : a series of numbers in which each number is the sum of the two preceding numbers

0 1 1 2 3 5 ....
*/
#include<stdio.h>
int main()
{
    int a, b, c, n, i;
printf("Enter the number of terms of Fibonacci series that you want to display ");
scanf("%d", &n);
a=0;
b=1;
printf("%d %d ", a,b);
for(i=1; i<= n-2; i++){
    c= a+b;
    printf("%d ", c);
    a=b;
    b=c;
}
return 0;
}