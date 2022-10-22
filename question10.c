//Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag;
    char  a[3][2][20],username[20],password[20];
    printf("ENTER USERNAME");
     for(i=0;i<3;i++)
     {
        gets(a[i][2][20]);
     }
   printf("ENTER USER NAME");
   gets(username);
   printf("ENTER PASSWORD");
   gets(password);
   for(i=0;i<3;i++)
   {
    if(strcmp(username,a[i][0]==0)&& strcmp(password,a[i][1])==0)
    printf("LOGIN SUCCECCFUL");
    flag=1;
   }
   if(flag==0)
   printf("USERNAME AND PASSWORD NOT MATCH");
   return 0;
}