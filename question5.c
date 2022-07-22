// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;num--)
    {
      printf("\n%d",num*2-1);
    }
    return 0;
    
}