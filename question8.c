// Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void binary_of_a_given_decimal_number(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    binary_of_a_given_decimal_number(num);
    return 0;
}
void binary_of_a_given_decimal_number(int n)
{
    if(n==0)
    return;
    printf("%d",n&1);
    binary_of_a_given_decimal_number(n>>1);
}