/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i,j,temp;
    printf("enter a 10 number\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {    
     for(j=i+1;j<10;j++)
     {
        if(num[i]<num[j])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
        
     }
    }
    for(i=8;i<9;i++)
        {
            printf("second smallest number %d ",num[i]);
        }
        return 0;
}