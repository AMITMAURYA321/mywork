/*Write a function to check whether a given number is Prime or not. (TSRS)*/
int prime(int);
#include<stdio.h>
int main()
{
    int num1,i, total;
    printf("enter a numbers\n=> ");
    scanf("%d",&num1);
    total=prime(num1);
    if(i==total)
    printf("this is not prime number");
    else
    printf("this is prime number");
}
int prime(int n)
{ 
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    return n==i;
}