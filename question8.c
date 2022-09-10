// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int digits(int);
int main()
{int num, count;
    printf("enter a digits");
    scanf("%d",&num);
   count=digits(num);
   printf(" total digitd ==> %d",count);
} 
int digits(int n)
{
    if(n<10)
    return 1;
   return 1+digits(n/10);
}  