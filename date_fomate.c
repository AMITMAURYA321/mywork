/* WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) */

#include <stdio.h>
#include <conio.h>
int main() 
{
     int date,month,year;
     printf("enter day\n");
     scanf("%d",&date);
     printf("enter month\n");
     scanf("%d",&month);
     printf("enter year\n");
     scanf("%d",&year);
     printf("day - %d, month - %d year - %d",date,month,year);
}