/* Program to check whether a year is a leap year or not. Using switch
statement */

#include<stdio.h>
int main()
{
    int year;
    printf("ENTER A YEAR\n");
    scanf("%d",&year);
    switch (year%100==0)
    {
     case 1: switch (year%400==0)
        {
             case 0:
             printf("LEAP YEAR");
             break;
             case 1:
             printf("NON LEAP YEAR");
             break;
        }break;
     case 0: switch(year%4==0)
        {
             case 1:
             printf("LEAP YEAR");
             break;
             case 0:
             printf("NON LEAP YEAR");
             break;
        }
        
    
    }
}