//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
    printf("number positive");
    if(num<0)
    printf("number negative");
    if(num==0)
    printf(" number zero");
    return 0;
}