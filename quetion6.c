// Write a program to print the first 10 even natural numbers.
#include<stdio.h>
int main()
{
    int num=1;
    while (num<=20)
    {
        if(num%2==0)
        printf("\n%d",num);
        num++;
    }
    
}