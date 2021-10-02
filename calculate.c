/* This program performs arithmetic operations that you select*/
#include <stdio.h>

int main(void){
double num1, num2, sum, sub, quot, prod;
char choice;

  printf("Enter the first number: \n");
  scanf("%lf", &num1);
  printf("Enter the second number: \n");
  scanf("%lf", &num2);
  printf("The numbers are %lf and %lf\n", num1, num2);

  printf("What would you like to do with these numbers?\n");
  printf("add = a, subtract = s, multiply = m, divide = d\n");
  getchar();
  scanf("%c", &choice);
    if(choice == 'a') {
    sum = num1 + num2;
    printf("The answer is: %f\n", sum);
    } else if(choice == 's') {
    sub = num1 - num2;
    printf("The answer is: %f\n", sub);
    } else if(choice == 'm') {
    prod = num1 * num2;
    printf("The answer is: %f\n", prod);
    } else {
    quot = num1/num2;
    printf("The answer is: %f\n", quot);
    }
  return 0;
}
