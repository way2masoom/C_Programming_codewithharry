// W.A.P to convert celsius (cntigrade  degree temp. to Farenheight) [formula = (celsius * 9 / 5 )+ 32 ]
#include <stdio.h>

int main()
{
    float celsius = 37, far;
    far = (celsius * 9 / 5 )+ 32;
    printf("The value of this celsius temperature in Fahrenheit %f \t", far);
    
    return 0;
}