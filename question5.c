// Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i=20;
    while (i>=1)
    {
        if(i%2==0)
        printf(" ");
        else
        printf("\n%d",i);
        i--;
    }
    
}