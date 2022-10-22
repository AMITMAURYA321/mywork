/* Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
#include<stdio.h>
#include<string.h>
void sawp (char a[],int i,int j );
int main()
{
    int i,start=0,end=0,flag=0;
    char str[1000];
    printf("ENTER STRING");
    fgets(str,1000,stdin);
    while(str[i]!='\0')
    {
        while(str[i]!=' ')
        {
           if(str[i]=='\0')
           {
            flag =1;
            break;
           }
           end++;
           i++;  
        }
        swap(str,start,end-1);
    if(flag==1)
    {
        break;
        start = end ++;
        i++;
    }
       swap(str,0,i-1);
       printf("%s",str);
       return 0;
}
void sawp(char a[] int i,int j )
{ 
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}