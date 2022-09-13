/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    float avg;
    printf("Enter a 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {
        sum=sum+num[i];
    }
    avg=sum/10.0;
    printf("10 number avrage %f",avg);
    return 0;
}