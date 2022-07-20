/* Write a program to check whether a given number is a three-digit number or not.*/
#include<stdio.h>
int main()
{
    int number;
    printf("enter a nmber");
    scanf("%d",&number);
    if(number>99&&number<1000)
    printf("three digit number");
    if(99>number)
    printf("two digit number");
    if (number>999)
    printf("error this number more than three digits");
    return 0 ;
}