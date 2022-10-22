//Write a program to convert a given string into lowercase.
#include<stdio.h>
#include<string.h>
void lowercase(char a[]);
int main()
{
    int i;
    char a[100];
    printf("enter your name\n");
    fgets(a,100,stdin);
    lowercase(a);
}
void lowercase(char name[])
{
    int i;

    while(name[i]!='\0')
   {
         if(name[i]>='A'&&name[i]<='Z')
       {
        name[i]=name[i]+32;
       }
       i++;
    }
    printf("LOWERCASE ==> %s",name);
}
