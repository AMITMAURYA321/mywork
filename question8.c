   /* Write a function to calculate the number of arrangements one can make from n items
    and r selected at a time. (TSRS)*/
   #include<stdio.h>
   int Fact(int);
   int permutations(int,int);
   int main()
   {
      int num1,num2,arrangements;
      printf("enter a value\n ");
      scanf("%d",&num1);
      printf("Enter a selection\n");
      scanf("%d",&num2);
      arrangements=permutations(num1,num2);
      printf("%d",arrangements);
      return 0;
   }
    int Fact(int num)
   {
      int i, Factorial=1;
      for(i=1;i<=num;num--)
      Factorial=Factorial*num;
      return Factorial;
   }
    int permutations(int n,int r)
   {
      int total;
      total=Fact(n)/Fact(r);
      return total;
   }
   
