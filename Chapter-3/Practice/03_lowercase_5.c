//write a program to determin whether a character enter by the user is Lowercase or not
#include<stdio.h>

    int main(){
    char ch;
    printf("Enter the character please: \n");
    scanf("%c", &ch);

    if (ch<=122  && ch>=97)
    {
        printf("Character is Lower case");
    }
    else{
        printf("Character is Not a Lower case");

    }
    
    return 0;
}