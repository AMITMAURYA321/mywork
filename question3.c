// Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int num,i,s=0;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        s=s+i*2-1;
    }
    printf("%d",s);
}