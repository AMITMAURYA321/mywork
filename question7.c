/* Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
int main()
{
    int num,a=-1,b=1,i,c=0;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    

}