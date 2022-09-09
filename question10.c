/* Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/
#include<stdio.h>
int fatorial(int);
int main()
{
    int sum=0,i,num; 
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+fatorial(i)/i;
    }
    printf("%d",sum);
    return 0;
}
int fatorial(int n)
{
    int fatorial=1,i;
    for(i=1;i<=n;i++)
    {
        fatorial=fatorial*i;
    }   
        return fatorial ;
}