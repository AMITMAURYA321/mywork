// Write a recursive function to print squares of first N natural numbers;
#include<stdio.h>
void squares_of_first_N_natural(int);
int main()
{
    int num;
    printf("enter a anumber");
    scanf("%d",&num);
    squares_of_first_N_natural(num);
}
void squares_of_first_N_natural(int n)
{
    if(n==0)
    return;
    squares_of_first_N_natural(n-1);
    printf("%d ",n*n);
}