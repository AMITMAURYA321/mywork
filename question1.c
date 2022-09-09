// Write a recursive function to print first N natural numbers.
#include<stdio.h>
void natural_numbers(int n);
int main()
{
    int k,s;
    printf("enter a number");
    scanf("%d",&k);
    natural_numbers(k);
}
void natural_numbers(int n)
{
    if(n==0)
    return;
    natural_numbers(n-1);
    printf("%d ",n);
}