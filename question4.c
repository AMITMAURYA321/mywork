//Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int num,i;
    printf("entre a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n%d",i*2-1);
    }
    return 0;
}