#include<stdio.h>

// sum from 1 to a given number
// sum=(n*(n+1))/2
int main()
{
 int number,sum;
 printf("Number=");
 scanf("%d",&number);
 sum=(number*(number+1))/2;
 printf("Sum upto %d=%d\n",number,sum);
 return 0;
}
