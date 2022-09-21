//Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[100];
    printf("enter your name\n");
    fgets(name,100,stdin);
    while(name[i]!='\0')
   {
         if(name[i]>='a'&&name[i]<='z')
       {
        name[i]=name[i]-32;
       }
       i++;
    }
    printf("uppercase ==> %s",name);
    return 0;
}
