/*Write a function in C to read n number of values in an array and display it in reverse
order.*/
#include<stdio.h>
void reverse(int b[],int n);
int main()
{
    int size;
    printf("Enter size ==>");
    scanf("%d",&size);
    int a[size];
    reverse(a,size);
}
void reverse(int b[],int n)
{
    int i;
    printf("enter %d numbers \n",n);
     for(i=0;i<=n-1;i++)
     scanf("%d",&b[i]);
     printf("Reverse Order ==> ");
     for(i=n-1;i>=0;i--)
     {
        printf("%d ",b[i]);
     }
}