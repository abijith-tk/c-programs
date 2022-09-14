#include<stdio.h>

// reverse of a number

int main()
{
 int num,rev=0,rem;
 printf("Number=");
 scanf("%d",&num);
 while(num>0)
 {
  rem=num%10;
  rev=rev*10+rem;
  num=num/10;
 }
 printf("Reverse=%d",rev);
 return 0;
}
