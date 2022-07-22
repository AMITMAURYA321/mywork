// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n%d",i*2);
    }
    return 0;
}