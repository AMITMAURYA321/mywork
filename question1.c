/* Write a program which takes the month number as an input and display
number of days in that month. */
#include<stdio.h>
int main()
{
    int number;
    printf("enter month number\n");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
    printf("january days 31");
        break;
    case 2:
    printf("febuary days 30");
        break;
    case 3:
    printf("march days 31");
        break;
    case 4:
    printf("April days 30");
        break;
    case 5:
    printf("may days 31");
        break;
    case 6:
    printf("june days 30");
        break;
    case 7:
    printf("july days 31");
        break;
    case 8:
    printf("August days 31");
        break;
    case 9:
    printf("September days 30");
        break;
    case 10:
    printf("October days 31");
        break;
    case 11:
    printf("November days 30");
        break;
    case 12:
    printf("December days 31");
        break;
    default:
    printf("thnaku ");
        break;
    }
}