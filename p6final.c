#include <stdio.h>

void input_string(char* a, char* b)
{
    printf("enter the string\n");
  scanf("%s",a);
  printf("enter the substring\n");
  scanf("%s",b);
  }
int sub_str_posn(char *string, char *substring)
{
  int i,j=0;
  for(int i=0;string[i]!=0 && substring[j]!=0;i++)
    {
      if(string[i]==substring[j])
        j++;
      else
      if(j!=0)
        j=0;
    }
  if(j!=0)
    return i-j;
     return -1;
  }

void output(char* string, char* substring, int index)
{
  if(index>=0)
    printf(index of %s in %s is %d\n,substring,string,index);
  else
  printf("%s is not found in %s\n",substring,string);
    
}

int main()
{
  char str1[100];
  char str2[100];
  int index
  input_string(str1,str2);
  index=str_reverse(str1,str2);
  output(str1,str2,index);
    return 0;
    }
    


