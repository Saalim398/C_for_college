//Addition of two numbers in C
#include <stdio.h>

int main() {
 float a, b, sum;
  printf("please enter the first number \n");
  scanf("%f", &a);
  printf("Please enter the second number \n");
  scanf("%f", &b);
  sum = a + b;
  printf("The sum of %.2f and %.2f is %.2f", a, b, sum); 
  return 0;
}