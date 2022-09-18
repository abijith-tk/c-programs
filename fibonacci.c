#include <stdio.h>
// program to display fibonacci series
int main()
{
  int a=-1,b=1,c,n;
  printf("Enter n:");
  scanf("%d",&n);
  printf("Fibonacci series upto n numbers\n");
  for(int i=1;i<=n;i++)
  {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }
  return 0;
}
