/* Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int number,appenddigit, result;
    printf("enter a digit ");
    scanf("%d",&number);
    printf("enter Append adigit ");
    scanf("%d",&appenddigit);
    number=number*10;
    result=number+appenddigit;
    printf("resulting number is = %d",result);
    return 0;

}