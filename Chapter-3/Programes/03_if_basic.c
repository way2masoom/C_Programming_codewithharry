// C programe to check wheather the number id Even or Odd
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even number \n", a);
    }
    else
    {
        printf("%d is Odd number \n", a);
    }
    return 0;   
}