#include<stdio.h>

// factorial

int main()
{
 int number,fact=1;
 printf("Number=");
 scanf("%d",&number);
 for(int i=1;i<=number;i++)
 {
  fact=fact*i;
 }
 printf("Factorial=%d\n",fact);
 return 0;
}
