//Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int factorial(int);
int factorial(int n)
{
  if(n==1)
  return 1;
  return n*factorial(n-1);
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    printf("%d", factorial(num));
}