//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natural_numbers_in_reverse(int n);
int main()
{
    int num;
    printf("enter a number\n=>");
    scanf("%d",&num);
    natural_numbers_in_reverse(num);
}
void natural_numbers_in_reverse(int n)
{
    if(n==0)
    return;
    printf("%d ",n);
    natural_numbers_in_reverse(n-1);
}
