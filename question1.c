// Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, Fibonnaci, i,total;
    printf("enter a number");
    scanf("%d", &num);
    printf("0 ");
    printf("1 ");
    for (i = 1; i < num; i++)
    {
        Fibonnaci = a + b;
        printf("%d ", Fibonnaci);
        a=b;
        b=Fibonnaci;
    }
        
}