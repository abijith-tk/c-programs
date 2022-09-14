#include<stdio.h>

// iterate first 10 numbers and return the sum of current and previous number

int main()
{
 int current,previous,sum;
 for(int i=1;i<=10;i++)
 {
 /* current=i;
  previous=i-1;
  sum=current+previous;
 */
  sum=i+(i-1);
  printf("Sum of iteration %d=%d\n",i,sum);
 }
 return 0;
}
