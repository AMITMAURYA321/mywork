//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void odd_natural(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    odd_natural(num);
}
void odd_natural(int n)
{
    if(n==0)
    return;
    printf("%d \n",2*n-1);
    odd_natural(n-1);
}