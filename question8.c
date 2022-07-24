/*Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
int main()
{
    int num,i,ironman=0;
    printf("enter a number");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
          ironman=1;
          break;
        }
    }
    if(ironman==1)
    
        printf("not prime");
        else
        printf("prime number");
    
}