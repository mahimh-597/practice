#include<stdio.h>
#include<math.h>

int main(void){
 double first , second , first_sqrt , second_sqrt , sum_sqrt ;

printf("Enter first number> ");
scanf("%lf",&first);
first_sqrt= sqrt(first);
printf("the square root of the 1st number is %.2f\n",first_sqrt);

printf("Enter second number> ");
scanf("%lf",&second);
second_sqrt= sqrt(second);
printf("the square root of the 2nd number is %.2f\n",second_sqrt);

sum_sqrt= sqrt (first + second);
printf("the square root of the sum of the two numbers is %.2f\n",sum_sqrt);
return 0;


}

