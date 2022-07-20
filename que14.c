// Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if((num%7==0) || (num%3==0))
    {
        printf("number divisible 7 and 3 ==> %d ",num);
    }
    else
    {
        printf("number not divisible 7 and 3 ==> %d ",num);
    }
    return 0;
}
