/* write a program to find out whether a student is pass or fail;
If it requires totalPercentage 40%  and at lest 33% in each subject to pass.
Assume 3 subjects and take marks as input from the USER. */

#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float totalPercentage;

    // Tacking data From User
    printf("Enter the marks of Physics: \n");
    scanf("%d", &physics);

    printf("Enter the marks of Chemistry: \n");
    scanf("%d", &chemistry);

    printf("Enter the marks of Maths: \n");
    scanf("%d", &maths);

    //  totalPercentage Marks of the Subjects 
    totalPercentage = (physics + chemistry + maths)/3;

    // Condation to check whether student is pass or Fail 
    if (totalPercentage<40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your totalPercentage percantage %f and you are Fail",(totalPercentage/3));
    }
    else
    {
        printf("Your totalPercentage percantage %f and you are Pass",(totalPercentage/3));
    }

    return 0;
}

