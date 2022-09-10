// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int calculat_the_power(int,int);
int main()
{
    int num1,num2;
    printf("enter a two numbers");
    scanf("%d%d",&num1,&num2);
    calculat_the_power(num1,num2);
    printf("===> %d",calculat_the_power(num1,num2));
    return 0;
}
int calculat_the_power(int n,int m)
{
    if(m==0)
    return 1;
    return n*calculat_the_power(n,m-1);
}