//Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
void upparcase(char a[]);
int main()
{
    int i;
    char a[100];
    printf("enter your name\n");
    fgets(a,100,stdin);
    upparcase(a);
}
void upparcase(char name[])
{
    int i;

    while(name[i]!='\0')
   {
         if(name[i]>='a'&&name[i]<='z')
       {
        name[i]=name[i]-32;
       }
       i++;
    }
    printf("uppercase ==> %s",name);
}
