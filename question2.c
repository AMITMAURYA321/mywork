/*Write a function to calculate HCF of two numbers. (TSRS)*/
int hcf(int num1,int num2);
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a two numbers");
    scanf("%d%d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}
int hcf(int num1,int num2)
{
    int h;
    for(h=num1<num2?num1:num2;h>=1;h--)
    if(num1%h==0&&num2%h==0)
    break;
    return h;  
}