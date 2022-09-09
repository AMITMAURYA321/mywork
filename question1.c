/* 1. Write a function to calculate LCM of two numbers. (TSRS)*/
#include<stdio.h>
int lcm(int,int);
int main()
{
    int num1, num2;
    printf("enter a two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf( "Lcm is %d",lcm(num1,num2));

}
int lcm(int num1,int num2)
{
    int l;
    for(l=num1>num2?num1:num2;l<=num1*num2;l++)
    if(l%num1==0&&l%num2==0)
    break;
    return l;
}