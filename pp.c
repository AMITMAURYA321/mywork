//Write a program to print unit digit of a given number...?.

    #include <stdio.h>
    int main()
{  
    int number,unitdigit;
    printf("enter a number");
    scanf("%d",&number);
    unitdigit=number%10;
    printf(" unitdigit is %d",unitdigit);
    return 0;

}