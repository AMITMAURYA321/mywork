/* Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char sort[3][20],t[20];
    printf("ENTER 10 CITY NAME\n");
    for(i=0;i<10;i++)
    {
        gets(sort[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(sort[i],sort[j])>0)

            {
                strcpy(t,sort[i]);
                strcpy(sort[i],sort[j]);
                strcpy(sort[j],t);
            }
        }

    }
    for(i=0;i<10;i++)
    printf("%s\n",sort[i]);
    return 0;
}
