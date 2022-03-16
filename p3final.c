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
  int i;
  for(int i=2;i<=sqrt(n);i++)
    {
      if((n%i)==0)
        return 0;
    }
   return 1;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n);
}
int main()
{
  int x,prime;
  x=input_number();
  prime=is_prime(x);
  output(x,prime);
  return 0;
  }
