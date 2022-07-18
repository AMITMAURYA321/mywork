// Write a program to check whether the given number (9) is even or odd using a bitwise operator.
#include<stdio.h>
int mian()
{
    int number=9;
    int result=number&1;
    if (result==1)
    printf("ood number");
    else
    printf("even number");
    return 0;
}