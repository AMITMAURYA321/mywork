//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int calculate_HCF(int,int);
int calculate_HCF(int n,int m)
{
    if(m==0)
    return n;
    calculate_HCF(m,n%m);    
}
int main()
{
    int num1,num2, result;
    printf("enter a two number\n");
    scanf("%d%d",&num1,&num2);
    result=calculate_HCF(num1,num2);
    printf("HCF ==%d",result);
    return 0;
}