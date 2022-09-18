#include<stdio.h>

// iterate first 10 numbers and return the sum of current and previous number

int main()
{
 int sum;
 for(int i=1;i<=10;i++)
 {
  sum=i+(i-1);
  printf("Sum of iteration %d=%d\n",i,sum);
 }
 return 0;
}
