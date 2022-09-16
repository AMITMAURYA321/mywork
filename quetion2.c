/*Write a function to find the smallest number from the given array of any size.*/
#include<stdio.h>
void  greatest_number(int []);
int main()
{
    int b[10],i;
    printf("enter a 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&b[i]);
   greatest_number(b);
}
void  greatest_number(int a[])
{
    int i,max;
    for(i=1;i<=9;i++)
    {
        if(max>a[i])
        max=a[i];
    }
    printf("smallest numbe %d",max);
}
