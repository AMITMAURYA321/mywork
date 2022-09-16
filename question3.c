/*Write a function to sort an array of any size.*/
#include<stdio.h>
void sort(int b[]);
int main()
{
    int a[10],i;
    printf("enter a 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sort(a);
}
void sort(int b[])
{
    int i,sort=0;
     for(i=0;i<=9;i++)
     {
        if(sort<b[i])
        sort=b[i];
        printf("%d ",sort);
     }
}