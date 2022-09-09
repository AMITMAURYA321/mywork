// Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
void octal_of_a_given_decimal_number(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    octal_of_a_given_decimal_number(num);
    return 0;
}
void octal_of_a_given_decimal_number(int n)
{
    if(n==0)
    return;
    octal_of_a_given_decimal_number(n/8);
    printf("%d",n%8);
}