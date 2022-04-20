#include<stdio.h>
int input_array_size()
{
  int x;
  printf("enter the array size\n");
  scanf("%d",&x);
  return x+1;
  }
void init_array(int n,int a[n])
{
  a[0]=0;
  a[1]=0;
  for(int i=2;i<=n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
   for(int i=2;i<n;i++)
     {
       for(int k=i+i;k<n && a[i];k=k+i)
         {
           a[k]=0;
         }       
     }
  }
  void out_put(int n, int a[n])
  {
    for(i=0;i<n-1;i++)
      {
        if(a[i])
        printf("%d\n",a[i]);
        }
          if(a[n-1])
            printf("%d\n",a[n-1]);
        else
            printf("\n");
      
  }
  int main()
  {
    int n,a[n];
    n=input_array_size();
    init_array(n,a[n]);
    erotosthenes_sieve(n,a[n]);
    out_put(n,a[n]);
    return 0;
    }
  
