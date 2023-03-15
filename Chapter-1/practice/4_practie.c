// W.A.P to calculate simple interest for a
// set of values representing PRINCIPAL, NO. of years and RATE of interest
#include <stdio.h>

int main()
{
    int principal = 100, rate = 4, year = 1;

    int simpleinterest = (principal * rate * year) / 100;

    printf("The value of simple Interest is = %d \t", simpleinterest);
    
    return 0;
}