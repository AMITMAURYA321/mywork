// Write a program to count digits in a given number.
#include<stdio.h>
int main()
{
    int digit,i,count=0;
    printf("enter a digit");
    scanf("%d",&digit);
    for(i=0;digit != i;count++)
    {
       digit=digit/10;
    }
    printf("%d",count);
      
}