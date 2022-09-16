//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
int main()
{
    int a[10]={3,4,5,3,5,6,7,8,9,9};
    int freq[100]={0},i;

    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(freq[i]!=0)
        printf("%d==>%d\n",i,freq[i]);
    }
    return 0;
}