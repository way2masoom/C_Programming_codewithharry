// Arithmatic declaration instruction in c
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 9;
    int b = 10;

    // The valuses of a and b is listed
    printf("The value of a+b is = %d \n", a + b);
    printf("The value of a-b is = %d \n", a - b);
    printf("The value of a*b is = %d \n", a * b);
    printf("The value of a/b is = %d \n", a / b);

    int z = 30;
    z = b * a; // legal
    // b *a = z;  // Illegal

    printf("The value of z is = %d \n", z);

    // Moduel Division Operators
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

    // No operator is assumed to be present (int)20
    // printf("The value of 4 * 5 is %d\n", (4)(5)); ---> will reaturn 20/ wrong
    printf("The value of 4 * 5 is %d\n", (4) * (5));

    // There is no operator perfum Expontitonal in c
    printf("The value of 4 ^ 5 is %d\n", 4 ^ 5); // --> Will not produce 4 to the power 5

    // To print the value of power, must used math.h in header file
    printf("The value of 4 to the power 5 is %f \n ", pow(2, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);         // When we add int and int it will reaturn int
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);     // When we add int and float it will reaturn float
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6); // When we add flaot and flaot it will reaturn float
    printf("The value of 5/2 is %d\n", 5 / 2);

    printf("The value of 3.0/9 is %f\n", 3.0 / 9);

    return 0;
}