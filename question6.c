/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter a number");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    printf("greater number %d",num1);
    if(num2>num1)
    printf("greater number %d",num2);
    if(num1==num2)
    printf(" greater number%d",num1);
    return 0;
}