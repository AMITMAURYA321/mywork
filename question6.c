/* Write a function to print all Prime numbers between two given numbers. (TSRN)*/
void Prime_numbers_between_two_given_numbers(int,int);
#include<stdio.h>
int main()
{
    int n1,n2,i,x;
    printf("enter a two numbers\n");
    scanf("%d%d",&n1,&n2);
    Prime_numbers_between_two_given_numbers(n1,n2);
}
void Prime_numbers_between_two_given_numbers(int num1,int num2)
{

    int i,x;
    for(x=num1+1;x<=num2-1;x++)
    {
      for(i=2;i<x;i++)
      if(x%i==0)
      break;
      if(i==x)
      printf("%d\n",x);
    }  
}