//  Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int digit,remender=0,sum=0;
    printf("enter a three digitd ");
    scanf("%d",&digit);
    remender=digit%10;
    digit=digit/10;
    sum=sum+remender;

    remender=digit%10;
    digit=digit/10;
    sum=sum+remender;

    remender=digit%10;
    digit=digit/10;
    sum=sum+remender;

    printf("sum of the digits %d",sum);

}