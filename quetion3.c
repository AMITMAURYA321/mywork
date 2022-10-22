//Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int compare(char[],char[]);
int main()
{
    int i,flag,result;
    
    char str[20];

    char str1[20];;

    printf("\nENTER STRING ");

    fgets(str,20,stdin);

    printf("\nENTER SECOND STRING ");

    fgets(str1,20,stdin);

    result=compare(str,str1);

    if(result==0)

        printf("STRING ARE SAME");
    else
        printf("STRING NOT SAME");
}
int compare(char a[],char b[])
{
    int flag=0,i=0;

    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        return 0;
    else
        return 1;
}
