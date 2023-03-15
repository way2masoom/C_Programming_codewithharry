//
#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
    // int vippass=5;
    printf("Enter the Age :");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vippass == 5)
    {
        printf("You are above 18 and Bellow 70 ,You can drive \n");
    }
    else
    {
        printf("You can't drive");
    }
    return 0;
}