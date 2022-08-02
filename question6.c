// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int num=100,i ,find=0;
    printf("all Prime numbers under 100\n");
    for(num=2;num<=100;num++)
    {
        find=0;
    for(i=2;i<=num/2;i++)
    if(num%i==0)
    {
        find=1;
    }
    if(find==0)
    printf("%d ",num); 
    }
    return 0;

}