// Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    printf("enter a value\n");
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;num--)
    printf("\n%d",num);
}