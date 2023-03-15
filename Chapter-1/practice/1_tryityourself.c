#include <stdio.h>

int main()
{
    // Adding program by defult value

    /* int a = 46;
     int b = 50;
     //Adding to number
     int sum = a+b;
     printf("The sum of two number is = %d %d",sum);
     */

    int a = 0, b = 0;
    int sum = 0;

    // Ask user to enter the two numbers
    printf("Enter the value of A \t");
    scanf("%d", &a);

    printf("Enter the value of B \t");
    scanf("%d", &b);

    // Calculate the addition of A and B
    // using '+' operator
    sum = a + b;

    // Print the sum
    printf("Sum of A and B is: %d", sum);

    return 0;
}