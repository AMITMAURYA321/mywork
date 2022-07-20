/*Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(num%2==0)
    printf(" %d given number is an even",num);
    else
    printf(" %d given number is an odd",num);
    return 0;

}