//Write a function to calculate length of the string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char cal[100];
    printf("\nenter your name ");
    fgets(cal,100,stdin);
    i=strlen(cal);
    printf("Lenth of %s is %d",cal,i-1);
    return 0;
}
/* without using function
   #include<stdio.h>
   #include<string.h>
   int main()
{
    int i;
    char len[20];
    printf("enter your name");
    fgets(len,20,stdin);
    for(i=0;i<=len[i];i++);
    printf("%d",i-1);
    return 0;
}
*/

