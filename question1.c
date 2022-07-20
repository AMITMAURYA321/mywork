// Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number  ");
    scanf("%d",&num);
    if(0<num)
    printf("positive num  %d",num);
    else
    printf("non-positive %d ",num);
    return 0;
}