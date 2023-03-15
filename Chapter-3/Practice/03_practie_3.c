/* calculate incoome tax paid by an employe to the government as oer the slals mentioned below:

Income Slal         Tax
2.5L - 50 L         5%
5.0L - 10.0L        20%
Above 10.0L         30%

Note: There is no Tax below 2.5L, Taken icome amount as an input from the User
*/

#include <stdio.h>

int main()
{
    float tax = 0, income;

    printf("Enter your Income please : \n");
    scanf("%f", &income);
    
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.5 * (income - 250000);
    }

    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }

    printf("Your net income tax to be paid by 26th of this month is %f \n", tax);

    return 0;
}
