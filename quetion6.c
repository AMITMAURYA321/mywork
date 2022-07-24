// Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int num;
    int factorial=1;
    printf("entre a number");
    scanf("%d",&num);
    for(factorial=1;num>=1;num--)
    {
        factorial=factorial*num;
    }
    printf(" %d",factorial);
    
    return 0;
}