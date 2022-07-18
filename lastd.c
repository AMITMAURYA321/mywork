// Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int number,lastdigit;
    printf("enter a number");
    scanf("%d",&number);
    lastdigit=number/10;
    printf(" unitdigit is %d",lastdigit);
    return 0;
}