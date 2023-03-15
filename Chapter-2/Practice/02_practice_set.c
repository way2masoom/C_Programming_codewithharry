// !) check whethe it is valid or incalid
#include <stdio.h>

int main()
{
    // int a; b=a; // invalid
    // int v = 3 ^ 3; // valid but can't print 9 as we expeting...
    // char dt='12 Dec 2022'; // invalid

    // 2) what data type will 3.0/8-2  return?
    // float f=(3.0/8-2);
    // printf("the value it will reaturn is = %f \n",f);

    // 3)WAP to check whether a number is divisible by 97 or not
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("Divisibility test reaturns %d\n", num % 97);

    // 4) Explain step by step evaluation of 3*x/y-z+k where x=2 y =3 z=3 k=1
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3-3+1
    //  2-3+1
    // 1
    printf("The value of reasult is= %d", result);

    // 5) 3.0 +1 will be  
    // a) Integer 
    // b) Floating number ↩️
    // c) Character 


    return 0;
}