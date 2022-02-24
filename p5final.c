//e sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit.//
#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
  }
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
    a[0]=0;
    a[1]=0;
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=2;
  while(i<sqrt(n))
  {
    while(a[i]==0)i++;
      for(int k=i+i; i<n; k+=i)
        {
    a[k]=0;
          i++;
  }
 }
  }
void display(int n,int a[n])
{
  for(int i=0; i<n; i++) 
  {
    if(a[i] !=0)
      printf("%d ",a[i]);
  }
   printf("\n");
  }
  int main()
  {
    int x,a[x];
    x=input_array_size();
    init_array( x, a);
     erotosthenes_sieve(x,a);
    display(x,a);
    return 0;
  }
