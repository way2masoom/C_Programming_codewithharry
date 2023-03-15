// Conditional Operators
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    // one liner condition check
    (a > 5) ? printf("Number is less then 5") : printf("Number is not less than 5");

    return 0;
}