// Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num,i,remender,reverse=0;
    printf("enter a number\n");
    scanf("%d",&num);
    while (num!=0)
    {
        remender=num%10;
        num=num/10;
        reverse=reverse*10+remender;
    }
    printf("reverse is %d",reverse);
    return 0;
    

}