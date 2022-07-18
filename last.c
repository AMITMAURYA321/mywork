//Write a program to print a given number without its last digit.

#include <stdio.h>
int mian()
{
    int number,lastdigit;
    printf("enter a number");
    scanf("%d",&number);
    lastdigit=number/10;
    printf("last digit is %d",lastdigit);
    return 0;
}

