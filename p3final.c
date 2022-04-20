#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
    {
      if((n%i)==0)
        count++;
    }
   return count;
}
void output(int n,int is_prime)
{
  if(is_prime<=2)
    printf("%d is a prime number\n",n);
  else
    printf("%d is a not prime number\n",n);
}
int main()
{
  int x,prime;
  x=input_number();
  prime=is_prime(x);
  output(x,prime);
  return 0;
  }
