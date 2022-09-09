//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd_natural(int n);
int main()
{
    int num;
    printf("enter a number\n=>");
    scanf("%d",&num);
    odd_natural(num);
}
void odd_natural(int n)
{
    if(n==0)
    return;
    odd_natural(n-1);
    printf("%d ",2*n-1);
}