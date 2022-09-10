//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digits(int);
int main()
{int num;
    printf("enter a digits");
    scanf("%d",&num);
    printf("%d",sum_of_digits(num));
} 
int sum_of_digits(int n)
{
    if(n==0)
    return 0;
   return (n%10)+sum_of_digits(n/10);
}  