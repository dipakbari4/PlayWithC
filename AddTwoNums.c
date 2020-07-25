#include<stdio.h>

int main(){
    int a, b, res;

    // General printing to hint functionality about the program
    printf("This program will add two given number from user\n");

    // Prompt to get value for 'a' variable
    printf("Enter value for a: ");
    scanf("%d", &a);

    // Prompt to get value for 'b' variable
    printf("Enter value for b: ");
    scanf("%d", &b);

    // Adding two number and assigning into 'res' variable
    res = a + b;

    // Giving output
    printf("Sum of %d and %d is %d", a, b, res);

    return 0;
}