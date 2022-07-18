/* 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int digit, rem ,result;
    printf("enter a digit ");
    scanf("%d",&digit);
    rem=digit%10;
    digit=digit/10;
    rem=rem*100;
    result=rem+digit;
    printf("%d",result);

}