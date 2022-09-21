//Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[100];
    printf("enter your name in capital letters\n");
    fgets(name,100,stdin);
    while(name[i]!='\0')
   {
         if(name[i]>='A'&&name[i]<='Z')
       {
        name[i]=name[i]+32;
       }
       i++;
    }
    printf("uppercase ==> %s",name);
    return 0;
}
