#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a=-1,b=1,c;
  for(int i=1;i<=10;i++)
  {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }
  return 0;
}