//Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
void up(char name[]);
int main()
{
    int i;
    char a[100];
    printf("enter your name\n");
    fgets(a,100,stdin);
    up(a);
};
void up(char b[])
{
    int i,word=0,space=0,
    l=strlen(b);
    for(i=0;i<l;i++)
    {
        if(b[i]!=' '&& b[i]!='\t')
        {
            word++;

            while(b[i]!=' ' && b[i]!=' \t')
         {
            i++;
         }
        }
        space++;
    }
    space--;
    printf("\nNUMBER OF WORDS %d",word);
    printf("\nNUMBER OF SPACE %d",space);

}
