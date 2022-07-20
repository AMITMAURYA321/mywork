/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
    char c ='A';
    if((97<= c) && (c <=122))
    printf("lowercase");
    if((65<=c) && (c<=90))
    printf("Uppercase");
    return 0;


}