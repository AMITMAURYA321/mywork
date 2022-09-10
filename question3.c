// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int squares_natural_numbers(int);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    printf("%d",squares_natural_numbers(num));
    return 0;
}
int squares_natural_numbers(int n)
{
    if(n==1)
    return 1;
    return n*n+squares_natural_numbers(n-1);
}