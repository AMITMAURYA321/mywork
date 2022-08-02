/*Write a program to check whether a given number is there in the Fibonacci
series or not.*/
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, Fibonnaci, i,total;
    printf("enter a number");
    scanf("%d", &num);
    for (i = 1;  1; i++)
    {
        Fibonnaci = a + b;
        a=b;
        b=Fibonnaci;
        if(Fibonnaci==num)
        {
            printf("given number is there in the Fibonacci series ");
            break;
        }
        if(Fibonnaci>num)
        {
            printf("given number is not there in the Fibonacci series");
            break;
        }
    }
        
}