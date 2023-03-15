// W.A.P to find Lowest of 4 number entered by the user
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter first no.\n");
    scanf("%d", &num1);

    printf("Enter second no.\n");
    scanf("%d", &num2);

    printf("Enter third no.\n");
    scanf("%d", &num3);

    printf("Enter fourth no.\n");
    scanf("%d", &num4);

    if (num1 < num2 && num1 < num3 && num1 < 4)
    {
        printf("%d (Num1) is Lowest ", num1);
    }
    else if (num2 < num3 && num2 < 4)
    {
        printf("%d (Num2) is Lowest ", num2);
    }
    else if (num3 < num4)
    {
        printf("%d (Num3) is Lowest ", num3);
    }
    else
    {
        printf("%d (Num4) is Lowest ", num4);
    }
    return 0;
}
