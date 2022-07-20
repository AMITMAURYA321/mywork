/*Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int month;
    printf("enter a month\n");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("january day ==31");
        break;
        case 2: 
        printf("February day == 30");
        break;
        case 3:
        printf("March day ==31");
        break;
        case 4:
        printf("April day == 30");
        break;
        case 5:
        printf("may day==31");
        break;
        case 6:
        printf("june day == 30");
        break;
        case 7:
        printf("july day==31");
        break;
        case 8:
        printf("august day==31");
        break;
        case 9:
        printf("september day == 30");
        break;
        case 10:
        printf("October day==31");
        break;
        case 11:
        printf("November day == 30");
        break;
        case 12:
        printf("december day==31");
        break;

    
    }
}