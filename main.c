#include <stdio.h>
#include <stdlib.h>

int main()
{
double num1;
double num2;
printf("Please enter first number: ");
scanf("%lf", &num1);
printf("Please enter second number: ");
scanf("%lf", &num2);
printf("Your answer is: %.2lf" , num1 + num2);
 return 0;
}
