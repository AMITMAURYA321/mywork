//Write a program to count vowels in a given string;
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0,consonant=0;
    char a[300];
    printf("enter  your name\n");
    fgets(a,300,stdin);
    while (a[i]!='\0')
    { i++;
    
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        count++;
        if(a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='f'||a[i]=='g'||a[i]=='h'||a[i]=='j'||a[i]=='k'||a[i]=='l'||a[i]=='m'||a[i]=='n'||a[i]=='o'||a[i]=='p'||a[i]=='q'||a[i]=='r'||a[i]=='s'||a[i]=='t'||a[i]=='v'||a[i]=='w'||a[i]=='x'||a[i]=='y'||a[i]=='z')
        consonant++;
                                                                    
    }
    printf("voewls== %d\n",count);
    printf("consonats== %d\n",consonant);
    return 0;
    
}