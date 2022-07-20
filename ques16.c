/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char c ='@';
    if((97<= c) && (c <=122))
    printf("lower case");
    if((65<=c) && (c<=90))
    printf("Upper case");
    if((0<=c)&&(c<=9))
    printf(" digit");
    if((32<=c)&&(c<=47))
    printf("special character");
    if((58<=c)&&(c<=64))
    printf("special character");
    if((91<=c)&&(c<=96))
    printf("special character");
    if((123<=c)&&(c<=126))
    printf("special character");
    return 0;


}