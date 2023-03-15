
#include <stdio.h>
int main()
{
    int i, j, rows;

    // To print Pyramid pattern
    printf("Print Pyramid pattern: \n");
    printf("------------------------\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // To print Inverted Pyramid pattern
    printf("\nPrint Inverted Pyramid pattern: \n");
    printf("-------------------------------\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // To print right angled triangle pattern
    printf("\nPrint right angled triangle pattern: \n");
    printf("-------------------------------------\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // To print mirrored right angled triangle pattern
    printf("\nPrint mirrored right angled triangle pattern: \n");
    printf("----------------------------------------------\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}