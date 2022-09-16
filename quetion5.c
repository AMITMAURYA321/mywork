/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
void input(int b[],int n);
int main()
{
    int size;
    printf("Enter size= ");
    scanf("%d",&size);
    int a[size];
    input(a,size);
}
void input(int b[],int n)
{
    int i;
    printf("Enter %d number\n",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&b[i]); 
    printf("first occurrence of adjacent duplicate values ==> ");
    for(i=0;i<=n-1;i++)
    {
        if(b[i]==b[i+1])
        printf("%d ",b[i]); 
    }   
}