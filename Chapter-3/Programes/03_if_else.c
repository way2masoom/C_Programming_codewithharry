//
#include <stdio.h>

int main()
{
    int age;
    printf("Enter the Age :");
    scanf("%d", &age);

    if (age > 90)
    {
        printf("You are above 90,you can't drive");
    }
    else
    {
        printf("You can drive");
    }

    return 0;
}