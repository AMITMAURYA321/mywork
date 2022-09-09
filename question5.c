/*Write a function to print first N prime numbers (TSRN)*/
void primnumber(int);
#include <stdio.h>
int main()
{
    int n;
    printf("enter a numbers\n=>");
    scanf("%d",&n);
    primnumber(n);
}
void primnumber(int num)
{
    int i,x=2,k;
     for(k=1;k<num;num)
    {
        for(i=2;i<x;i++)
        if(x%i==0)
        break;
        if(i==x)
        {
            printf("%d ",x);
            num--;
        }
        x++;
        
    }

}
   
