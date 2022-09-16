//Write a function in C to count a total number of duplicate elements in an array.
// ye quetion mai error hai so this question work pendding.
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
        if(b[i]==b[j])
        count++;
    }
    printf("duplicate elements in an array %d ",count);
 }
