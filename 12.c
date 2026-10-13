#include<stdio.h>
void sum(){
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
}
void sub(){
    int num1, num2, sub;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;
    printf("Subtraction: %d\n", sub);
}

int sum(){
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
        return sum;


}



int main(){
    
    sub();
    sum();
    sub();
    sum();
    sub();
    sum();
    sub();
    sum();
    sub();

    return 0;
}