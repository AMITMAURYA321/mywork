/*Write a program in C to find the square of any number using the function.*/
#include<stdio.h>
int square(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);8
    printf("%d",square(num));

}
int square(int n)
{
    int square;
    square=n*n;
    return square;
}