//Write a function in C to print all unique elements in an array.
#include<stdio.h>
void count(int b[],int n);
int main()
  
 {
    int size;
    printf("enter size==>");
    scanf("%d",&size);
    int a[size];
    count(a,size);
 }
 void count(int b[],int n)
 {
    int i,j,count;
    printf("enter %d number\n",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&b[i]);
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        if(b[i]==b[j]&&i!=j)
        count++;
    }
    printf("%d",count);
 }

