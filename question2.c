// Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, Fibonnaci, i,total;
    printf("enter a number");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        Fibonnaci = a + b;
        a=b;
        b=Fibonnaci;
    }
    printf("%d ", Fibonnaci);
    return 0;19
}