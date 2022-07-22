// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    printf("enter a value");
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    printf("\n%d",i*i);
}