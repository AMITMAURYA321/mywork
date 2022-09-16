/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include<stdio.h>
int main()
{
    int a[5]={1,3,5,7,9,};
    int b[5]={2,6,8,11,15};
    int c[10],k=0,i=0,j=0;

    for(k=0;k<=10;k++)
    {
        if(i>=5)
        {
            while(k<10)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==0)
                break;
            }
        }
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<10;k++)
    {
        printf("%d ",c[k]);
    }
}