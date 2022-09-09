/* Write a function to print first N odd natural numbers. (TSRN)*/
#include<stdio.h>
int odd_natural_numbers(int);
int main()
{
    int value;
    printf("enter a value");
    scanf("%d",&value);
    odd_natural_numbers(value);

}
int odd_natural_numbers(int num)
{
    int i;
    for(i=1;i<=num;i++)

        printf("%d\n",2*i-1);

}