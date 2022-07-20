// Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if((num%3==0)&&(num%2==0))
    {
        printf("number divisible 3 and 2 ==> %d ",num);
    }
    else
    {
        printf("number not divisible 3 and 2 ==> %d ",num);
    }
    return 0;
}
