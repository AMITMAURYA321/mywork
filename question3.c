/*Write a function to check whether a given number is even or odd. Return 1 if the
  number is even, otherwise return 0. (TSRS)*/
  #include<stdio.h>
  int even_odd(int num);
  int main()
  {
    int v,b;
    printf("enter a value");
    scanf("%d",&v);
    b=even_odd(v);
    printf("%d",b);
  }
  int even_odd(int num)
  {
    if(num%2==0)
        return 1;
        else
        return 0;
  }