//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int n)
{
  if(n==0||n==1)
  return n;
  return fib(n-1)+fib(n-2);
}
int fib(int);
int main()
{
    int num,i;
    printf("enter a numbers");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       printf("%d ",fib(i));

    }
    return 0;

}
