#include<stdio.h>
int input()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int temp;
  int num1=1;
  int num2=0;
  for(int i=1;i<=n;i++)
    {
      temp=num1;
      num1=num1+num2;
      num2=temp;
    }
  return num2;
}
void output(int n, int fibo)
{
  printf("Fibonacci sequence of %d is %d\n",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
  }



