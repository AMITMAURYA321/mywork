// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]={"23.145.23.44"};
    char*a=strtok(ip,".");
    while (a!=NULL)
    {
      int x= atoi(a);
      if((x>=0)&&(x<=255))
      printf("%d ",x);
      a=strtok(NULL,".");
    }
}