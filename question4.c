/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int num, result;
    printf("enter a number ");
    scanf("%d",&num);
    result=num&1;
    if(result==1)
    printf("number is odd",result);
    else
    printf("number is even",result);
    return 0;



}