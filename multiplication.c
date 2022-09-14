#include<stdio.h>

// multiplication table

int main()
{
 int num,n,res;
 printf("Number=");
 scanf("%d",&num);
 printf("n=");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  res=i*num;
  printf("%dx%d=%d\n",i,num,res);
 }
 return 0;
}
