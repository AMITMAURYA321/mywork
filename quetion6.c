// Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
void reverse_natural_numbers(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    reverse_natural_numbers(num);
    return 0;
}
void reverse_natural_numbers(int n)
{
    if(n==0)
    return;
    printf("%d ",n*2);
    reverse_natural_numbers(n-1);
}